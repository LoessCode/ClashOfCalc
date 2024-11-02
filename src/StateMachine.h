#pragma once

#include <queue>

#include "GameState.h"

/*
the StateMachine will start running. 

The cleanup function of the current game state will push the next state to the statemachine.
*/


class StateMachine {
public:
	void run();

	void push_state(GameState* gameState);

private:
	GameState* m_currentState;
	std::queue<GameState*> m_states;
};