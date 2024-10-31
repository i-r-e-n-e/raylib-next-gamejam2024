#pragma once
#include "raylib.h"

class AssetLoader {
private:
    Texture2D _spritesheet{};

public:
    AssetLoader(void);
    void LoadTexture(const char* filename);
    void DrawTexture(const Rectangle& dest, const Rectangle& src, const Color& tint);
    void UnloadTexture(void);
};

namespace SrcRect {
    constexpr Rectangle StartNode{
        .x = 0.0f,
        .y = 0.0f,
        .width = 64.0f,
        .height = 64.0f,
    };

    constexpr Rectangle EndNode{
        .x = 64.0f,
        .y = 64.0f,
        .width = 64.0f,
        .height = 64.0f,
    };
}

