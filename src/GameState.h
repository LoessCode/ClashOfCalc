#pragma once
#include <raylib.h>

class GameState {
public:

	virtual ~GameState() = default;

	virtual void run(StateMachine* stateMachine);
	virtual void cleanup(StateMachine* stateMachine);

	static GameState* Instance() {
		return &m_gameState;
	}

protected:
	GameState() {}

	const char* m_title = "Title";

private:
	static GameState m_gameState;
};