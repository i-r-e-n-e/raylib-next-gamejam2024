#pragma once

enum class ScreenType {
    Menu,
    LevelSelect,
    Gameplay,
};

class Screen {
private:
    ScreenType _screenType = ScreenType::Menu;
    int _currentLevel = 1;

public:
    Screen(void);
    void Update(void);
    void Draw(void);
};

