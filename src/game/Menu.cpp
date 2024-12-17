#include "Menu.h"
#include "Game.h"

#include "../engine/SceneManager.h"

#include <memory>

namespace GameSpace
{
	/*
	struct MenuParameters : public Engine::SceneParameters
	{
		int windowHeight = 1080 / 1.1;
		int windowWidth = 1920 / 1.1;
		const char* sceneTitle = "ClashOfCalc: Main Menu";
	};
	*/

	static Engine::SceneParameters menuParameters =
	{
		1600, 900, "ClashOfCalc: Main Menu"
	};

	Menu::Menu()
		:Scene(menuParameters)
	{

	}

	void Menu::run()
	{
		InitWindow(m_windowWidth, m_windowHeight, m_sceneTitle);
		while (!WindowShouldClose()) {

		}
	}

	void Menu::update()
	{

	}

	void Menu::draw()
	{
		BeginDrawing();



		EndDrawing();
	}

	void Menu::cleanup()
	{
		CloseWindow();
		Engine::SceneManager::Instance().push_scene(
			std::make_shared < Game >()
		);
	}
}