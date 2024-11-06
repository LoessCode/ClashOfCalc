#pragma once

namespace Engine
{

	class Scene {
	public:
		Scene();

		virtual void run();
		virtual void cleanup();

	public:
		const int m_windowHeight = 1080/2;
		const int m_windowWidth = 1920/2;
		const char* const m_sceneTitle = "Scene";
	};	

}
