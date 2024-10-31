#include "../include/asset_loader.h"
#include "raylib.h"
#include "raymath.h"

AssetLoader::AssetLoader(void) {}

void AssetLoader::LoadTexture(const char* filename) {
    _spritesheet = ::LoadTexture(filename);
}

void AssetLoader::DrawTexture(const Rectangle& dest, const Rectangle& src, const Color& tint) {
    DrawTexturePro(_spritesheet, dest, src, Vector2Zero(), 0.0f, tint);
}

void AssetLoader::UnloadTexture(void) {
    ::UnloadTexture(_spritesheet);
}

