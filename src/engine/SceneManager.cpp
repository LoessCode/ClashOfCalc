#include "SceneManager.h"
#include "Scene.h"
#include "Logger.h"

#include <string>
#include <sstream>

SceneManager::SceneManager()
{
	//Pushes abstract Scene, which can have some useful init capabilities perhaps.
	m_currentScene = new Scene;
	m_scenes.push(m_currentScene);

	Logger::Instance().info("<SceneManager> Initiialized Scene Manager.");
}

SceneManager& SceneManager::Instance()
{
	//Initialises the singleton and returns it.
	static SceneManager sceneManager;
	return sceneManager;
}

void SceneManager::push_scene(Scene* scene)
{
	m_scenes.push(scene);

	std::stringstream message;
	message << "<SceneManager> Added Scene: '" << scene->m_sceneTitle << "'";
	Logger::Instance().info(message.str().c_str());
}

void SceneManager::run()
{
	while (!m_scenes.empty()) {
		m_currentScene = m_scenes.front();
		m_scenes.pop();

		std::stringstream message;
		message << "<SceneManager> Running Scene: '" << m_currentScene->m_sceneTitle << "'";
		Logger::Instance().info(message.str().c_str());

		m_currentScene->run();		

		m_currentScene->cleanup();
	}
}


