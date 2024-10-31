#include "../include/screen.h"
#include "raylib.h"

Screen::Screen(void) {}

void Screen::Update() {
    if (IsKeyPressed(KEY_ONE)) {
        _screenType = ScreenType::Menu;
    }
    if (IsKeyPressed(KEY_TWO)) {
        _screenType = ScreenType::LevelSelect;
    }
    if (IsKeyPressed(KEY_THREE)) {
        _screenType = ScreenType::Gameplay;
    }
}

void Screen::Draw(void) {
    switch (_screenType) {
        case ScreenType::Menu:
        {
            DrawText("Menu", 0, 0, 20, BLACK);
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

