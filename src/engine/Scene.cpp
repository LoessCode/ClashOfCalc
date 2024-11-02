#include "Scene.h"
#include "SceneManager.h"

#include <raylib.h>
#include <iostream>

Scene::Scene()
{

}

void Scene::run()
{
	InitWindow(m_windowHeight, m_windowWidth, m_sceneTitle);
}

void Scene::cleanup() 
{
	CloseWindow();
}