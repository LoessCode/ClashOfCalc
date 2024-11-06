#pragma once
#include <raylib.h>

#include "../engine/Scene.h"

namespace ClashOfCalc
{
	class Game : public Engine::Scene
	{
	public:
		Game();

		void run_init() override;

		void update() override;
		void draw() override;

		void cleanup() override; //Adding game scene

	};
}