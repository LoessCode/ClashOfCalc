#include "Entity.h"

GameSpace::Entity::Entity(Vector2 spawnPosition)
	: m_pos(spawnPosition)
{
	m_moveParams = GameSpace::EntityMoveParameters(
		{ 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, false
	);
}

void GameSpace::Entity::update()
{
}

void GameSpace::Entity::draw()
{
}

void GameSpace::Entity::update_move()
{
	//Code each frame to move the entity based on EntityMoveParams and keyboard presses.
}
