#include "raylib.h"
#include "../include/asset_loader.h"


int main(void) {
    InitWindow(800, 600, "Gamejam");
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawRectangleRec(StartSrcRect, BLUE);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}

