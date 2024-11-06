#include "Scene.h"
#include "SceneManager.h"
#include "Logger.h"

#include <raylib.h>
#include <iostream>

namespace Engine
{
	Scene::Scene(SceneParameters params)
		:m_windowHeight(params.windowHeight), m_windowWidth(params.windowWidth), m_sceneTitle(params.sceneTitle), m_targetFPS(params.targetFPS)
	{
		m_FPS = m_targetFPS; 
	}

	void Scene::run_init()
	{

	}

	void Scene::run()
	{
		run_init();
		InitWindow(m_windowHeight, m_windowWidth, m_sceneTitle);
		SetTargetFPS(m_FPS);

		float lastPerSecondTime = 0.0f;


		while (!WindowShouldClose()) {
			update();
			/*****
			Here, GetTime() get's the time since the start of the window
			if lastPerSecondTime is less than get time by a factor of one second, then per second is called
			lastPerSecondTime is incrememnted
			*****/
			while (GetTime() - lastPerSecondTime > 1.0f)
			{
				per_second();

				lastPerSecondTime++;
			}
			
			draw();
		}

		CloseWindow();
	}

	void Scene::update()
	{

	}

	void Scene::per_second()
	{
		//Logger::Instance().info("<Scene> per_second() called.");
	}

	void Scene::draw()
	{

	}

	void Scene::cleanup()
	{

	}
}