#pragma once
#include <vector>
#include "raylib.h"

class AssetLoader {
private:
    std::vector<Texture2D> _textures{};

public:
    AssetLoader(void);
    int LoadTexture(const char* filename);
    void DrawTexture(int id, const Rectangle& dest, const Rectangle& src);
};

