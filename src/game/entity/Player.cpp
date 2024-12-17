#include "Player.h"
#include "Entity.h"

namespace GameSpace
{
	Player::Player()
		:Entity({ 0, 0 })
	{
		m_moveParams = GameSpace::EntityMoveParameters(
			{ 0, 0 }, { 0, 0 }, { 15, 15 }, { 25, 25 }, false
		);
	}

	void Player::update()
	{
	}

	void Player::update_move()
	{
	}
}

