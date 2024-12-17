#pragma once


#include "Entity.h"

namespace GameSpace
{
	class Player : public GameSpace::Entity
	{
	public:
		Player();

	public:
		void update() override;
		//void draw() override; For contrails and other cool effects :)

	private:
		void update_move() override;
	};
}