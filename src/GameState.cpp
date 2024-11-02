#include "GameState.h"
#include "StateMachine.h"

void GameState::run()
{
	InitWindow(1920, 1080, m_title);

	//Game Code

	CloseWindow();
}

GameState* GameState::next_state()
{
	return this->Instance();
	//Code to return next state for statemachine
}
