#include "Tile.h"

GameSpace::Tile::Tile(Vector2 tilePosition)
	: m_pos(tilePosition)
{

}

GameSpace::Tile::Tile(Vector2 tilePosition, std::vector<Texture2D&> textureFrames, int framesPausedPerTextureFrame)
	: m_textureFrames(textureFrames), m_framesPausedPerTextureFrame(framesPausedPerTextureFrame)
{

}
