#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "Gamejam");
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}

