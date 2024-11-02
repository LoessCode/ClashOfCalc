
#include "engine/SceneManager.h"
#include "engine/ResourceManager.h"
#include "engine/Scene.h"

int main() {
	Scene* menu = new Scene();

	SceneManager::Instance().push_scene(
		menu
	);
	SceneManager::Instance().run();

	return 0;
}