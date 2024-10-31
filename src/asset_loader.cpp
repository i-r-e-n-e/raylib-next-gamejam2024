#include "../include/asset_loader.h"
#include "raymath.h"

AssetLoader::AssetLoader(void) {}

int AssetLoader::LoadTexture(const char* filename) {
    Texture2D texture = ::LoadTexture(filename);
    _textures.push_back(texture);

    return _textures.size() - 1;
}

void AssetLoader::DrawTexture(int id, const Rectangle& dest, const Rectangle& src) {
    const Texture2D& texture = _textures[id];
    DrawTexturePro(texture, dest, src, Vector2Zero(), 0.0f, WHITE);
}

