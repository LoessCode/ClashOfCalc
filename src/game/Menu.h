#pragma once
#include <raylib.h>

#include "../engine/Scene.h"

namespace GameSpace 
{
	class Menu: public Engine::Scene 
	{
	public:
		Menu();

		void run() override;

		void update() override;
		void draw() override;

		void cleanup() override; //Adding game scene

	};
}