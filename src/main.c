#include <stdio.h>
#include <3ds.h>
#include <citro2d.h>

int main()
{
  // init delta time
  TickCounter dtt;
  osTickCounterStart(&dtt);
  // init services and prep graphic stuff
  romfsInit();
  gfxInitDefault();
  C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
  C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
  C2D_Prepare();
  C3D_RenderTarget* top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
  C3D_RenderTarget* btm = C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);

  while aptMainLoop() {
    // do stuff
  }
  C2D_Exit();
  C3D_Exit();
  romfsExit();
  gfxExit();
}
