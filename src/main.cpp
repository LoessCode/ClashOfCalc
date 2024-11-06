
#include "engine/SceneManager.h"
#include "engine/Scene.h"

#include "game/Menu.h"

#include <memory>

int main() 
{
	std::shared_ptr<Engine::Scene> menu = std::make_shared < ClashOfCalc::Menu > ();

	Engine::SceneManager sceneManager;

	sceneManager.push_scene(
		menu
	);

	sceneManager.run();
}