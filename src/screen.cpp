#include "../include/screen.h"
#include "raylib.h"

Screen::Screen(void) {}

void Screen::Update() {
    if (_screenType == ScreenType::StartPage) {
        Vector2 cursor = GetMousePosition();
        if (CheckCollisionPointRec(cursor, button)) {
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
                _screenType = ScreenType::LevelSelect;
            }
        }
    }
}

void Screen::Draw(void) {
    switch (_screenType) {
        case ScreenType::StartPage:
        {
            DrawRectangleRec(button, buttonColor);
            DrawText("StartPage", 0, 0, 20, BLACK);
            break;
        }
        case ScreenType::LevelSelect:
        {
            DrawText("Level select", 0, 0, 20, BLACK);
            break;
        }
        case ScreenType::Gameplay:
        {
            DrawText("Gameplay", 0, 0, 20, BLACK);
            break;
        }
    }
}

