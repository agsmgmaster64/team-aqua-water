#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "script.h"
#include "event_data.h"
#include "mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot
{
    u16 x;
    u16 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

static const u32 sMugshotImg_StupidRat[] = INCBIN_U32("graphics/mugshots/stupid_rat.4bpp.lz");
static const u16 sMugshotPal_StupidRat[] = INCBIN_U16("graphics/mugshots/stupid_rat.gbapal");

static const struct Mugshot sMugshots[] = {
    [MUGSHOT_STUPID_RAT] =
    {
        .x = 18,
        .y = 4,
        .width = 80,
        .height = 80,
        .image = sMugshotImg_StupidRat,
        .palette = sMugshotPal_StupidRat,
    },
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void)
{
    if (sMugshotWindow != 0)
    {
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(u16 mugshotId, int x, int y)
{
    struct WindowTemplate template;
    u16 windowId;

    if (sMugshotWindow != 0)
        ClearMugshot();

    SetWindowTemplateFields(&template, 0, x, y, sMugshots[mugshotId].width / 8, sMugshots[mugshotId].height / 8, MUGSHOT_PALETTE_NUM, 0x40);
    windowId = AddWindow(&template);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(sMugshots[mugshotId].palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)sMugshots[mugshotId].image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, sMugshots[mugshotId].width / 8, sMugshots[mugshotId].height / 8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(struct ScriptContext *ctx)
{
    u16 mugshotId = ScriptReadHalfword(ctx);
    DrawMugshotCore(mugshotId, sMugshots[mugshotId].x, sMugshots[mugshotId].y);
}

void DrawMugshotAtPos(struct ScriptContext *ctx)
{
    u16 mugshotId = ScriptReadHalfword(ctx);
    u16 x = ScriptReadHalfword(ctx);
    u16 y = ScriptReadHalfword(ctx);
    DrawMugshotCore(mugshotId, x, y);
}
