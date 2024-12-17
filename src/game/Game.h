#pragma once
#include <raylib.h>

#include "entity/Player.h"
#include "world/World.h"
#include "../engine/Scene.h"

namespace GameSpace
{
	class Game : public Engine::Scene
	{
	public:
		Game();

		//void run() override; 

		void update() override;
		void draw() override;

		void cleanup() override; //Adding game scene

	private:
		std::shared_ptr<Player> m_player;
		std::shared_ptr<World> m_world;
	};
}