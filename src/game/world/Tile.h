#pragma once
#include <raylib.h>
#include <vector>

namespace GameSpace
{
	class Tile
	{
	public:
		Tile(Vector2 tilePosition);
		Tile(Vector2 tilePosition, std::vector<Texture2D&> textureFrames, int framesPausedPerTextureFrame);

	protected:
		Vector2 m_pos;

		std::vector<Texture2D&> m_textureFrames;
		int m_framesPausedPerTextureFrame;
	};
}