#include "StateMachine.h"
#include "GameState.h"

void StateMachine::run()
{
	while (!m_states.empty()) {
		//Sets current state to the next in queue
		m_currentState = m_states.front();

		//Removes that from queue
		m_states.pop();

		//Executes
		m_currentState->run();
		if (m_currentState->hasNextState) {
			push_state(m_currentState->next_state());
		}

	}
}

void StateMachine::push_state(GameState* gameState)
{
	m_states.push(gameState);
}
