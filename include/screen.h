#pragma once
#include "raylib.h"

enum class ScreenType {
    StartPage,
    LevelSelect,
    Gameplay,
};

class Screen {
private:
    ScreenType _screenType = ScreenType::StartPage;
    int _currentLevel = 1;

    Rectangle button = {200, 200, 150, 50};  // Position (x, y) and Size (width, height)
    Color buttonColor = DARKGRAY;
    

public:
    Screen(void);
    void Update(void);
    void Draw(void);

    
};



