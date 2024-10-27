#include "GameState.h"
#include "StateMachine.h"

void GameState::run(StateMachine* stateMachine)
{
	InitWindow(1920, 1080, m_title);

	//Game Code

	CloseWindow();
}

void GameState::cleanup(StateMachine* stateMachine)
{
	//Code to push next state to stateMachine
}
