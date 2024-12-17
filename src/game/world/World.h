#pragma once
#include <raylib.h>

#include <unordered_map>

#include "Tile.h"

namespace GameSpace
{
	class World
	{
	public:
		World();

	public:
		virtual void update();

		virtual void draw(Vector2 screenCenter); //We generally pass player position here.

	protected:
		std::unordered_map<Vector2, GameSpace::Tile> m_loadedTiles;
		std::unordered_map<Vector2, GameSpace::Tile> m_omnipresentTiles; //Always loaded tiles like machines

	};
}

/*
Load On Demand:
Keep a certain amount of tiles in your pool, depending on player position.
Keep omnipresent tiles always loaded and always update them.
*/