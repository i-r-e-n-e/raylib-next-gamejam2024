#include "raylib.h"
#include "../include/asset_loader.h"
#include "../include/screen.h"


int main(void) {
    InitWindow(800, 600, "Gamejam");
    Screen s{};
    
    while (!WindowShouldClose()) {
        s.Update();
        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangleRec(SrcRect::StartNode, BLUE);
        s.Draw();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}

