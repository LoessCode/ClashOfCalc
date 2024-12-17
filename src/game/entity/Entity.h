#pragma once
#include <raylib.h>

namespace GameSpace
{
	
	struct EntityMoveParameters
	{ 
		/*
		All values here are per second times, NOT per frame times. So a deceleration of 15 is -15tile/s^2
		*/
		Vector2 acc; //Acceleration
		Vector2 vel; //Velocity
		Vector2 velCeiling; //Maximum Velocity
		Vector2 decc; //Deceleration
		bool isAcc; //Wether the player is accelerating
	};

	class Entity
	{
	public:
		Entity(Vector2 spawnPosition);
		
		Vector2 get_pos() { return m_pos; }

	public:
		virtual void update();
		virtual void draw();

	protected:
		virtual void update_move();

	protected:
		Vector2 m_pos;

		EntityMoveParameters m_moveParams;
	};
}