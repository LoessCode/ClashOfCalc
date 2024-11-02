#ifndef SCENE_H
#define SCENE_H

class Scene {
public:
	Scene();

	virtual void run();
	virtual void cleanup();
	
	const int m_windowHeight = 1080/2;
	const int m_windowWidth = 1920/2;
	const char* const m_sceneTitle = "Scene";

protected:

private:
	
};

#endif //Pragma once