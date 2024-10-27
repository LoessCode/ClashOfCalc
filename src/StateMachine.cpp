#include "StateMachine.h"

void StateMachine::run()
{
	while (!m_states.empty()) {
		//Sets current state to the next in queue
		m_currentState = m_states.front();

		//Removes that from queue
		m_states.pop();

		//Executes
		m_currentState->run(this);

		m_currentState->cleanup(this);
	}
}

void StateMachine::pushState(GameState* gameState)
{
	m_states.push(gameState);
}
