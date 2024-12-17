#include "Game.h"
#include "Menu.h"

#include "entity/Player.h"
#include "world/World.h"
#include "../engine/SceneManager.h"

#include <memory>

namespace GameSpace
{
	static Engine::SceneParameters gameParameters =
	{
		1600, 900, "Playing"
	};

	Game::Game()
		:Engine::Scene(gameParameters)
	{
		//Initialising player and world
		m_player = std::make_shared<Player>();
		m_world = std::make_shared<World>();
	}

	/*
	void Game::run()
	{
		InitWindow(m_windowWidth, m_windowHeight, m_sceneTitle);
		while (!WindowShouldClose()) {

		}
	}
	*/

	void Game::update()
	{
		m_player->update();
		m_world->update();
	}

	void Game::draw()
	{
		BeginDrawing();
		
		m_world->draw(m_player->get_pos());
		m_player->draw();

		EndDrawing();
	}

	void Game::cleanup()
	{
		CloseWindow();
		Engine::SceneManager::Instance().push_scene(
			std::make_shared < Menu >()
		);
	}
}