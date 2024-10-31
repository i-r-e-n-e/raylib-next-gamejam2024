#pragma once
#include "raylib.h"

class Button {
private:
    Rectangle _bounds{};

public:
    Button(float x, float y, float w, float h); //x, y are coordinates; w, h is the width and height of the button
    bool Update(void);
    void Draw(void);

    
};



