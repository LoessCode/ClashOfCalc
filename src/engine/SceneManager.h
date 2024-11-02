#pragma once

#include <raylib.h>
#include <queue>

#include "Scene.h"

//Meyer's singleton
class SceneManager {
public:
	//Ensuring that object cannot be copied by compiler
	SceneManager(const SceneManager&) = delete;
	//Ensuring that the instance cannot be assigned to another variable
	SceneManager operator = (const SceneManager&) = delete;
	//Returns an instance of the singleton
	static SceneManager& Instance();

	void push_scene(Scene* scene);
	void run();

protected:

private:
	SceneManager();

	std::queue<Scene*> m_scenes;
	Scene* m_currentScene;
};