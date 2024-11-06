
#include "engine/SceneManager.h"
#include "engine/Scene.h"

#include <memory>

int main() {
	std::shared_ptr<Engine::Scene> menu = std::make_shared<Engine::Scene>();

	Engine::SceneManager sceneManager;

	sceneManager.push_scene(
		menu
	);
	sceneManager.run();
}