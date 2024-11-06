#include "Game.h"
#include "Menu.h"

#include "../engine/SceneManager.h"

#include <memory>

namespace ClashOfCalc
{
	static Engine::SceneParameters gameParameters =
	{
		1600, 900, "ClashOfCalc: Playing"
	};

	Game::Game()
		:Engine::Scene(gameParameters)
	{

	}
	void Game::run_init()
	{

	}

	void Game::update()
	{

	}

	void Game::draw()
	{
		BeginDrawing();



		EndDrawing();
	}

	void Game::cleanup()
	{
		Engine::SceneManager::Instance().push_scene(
			std::make_shared < Menu >()
		);
	}
}