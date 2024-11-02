#pragma once
#include <raylib.h>

class GameState {
public:
	virtual ~GameState() = default;

	virtual void run();
	virtual GameState* next_state();

	bool hasNextState = true;

	static GameState* Instance() {
		return &m_gameState;
	}

protected:
	GameState() {};
	const char* m_title = "Title";

private:
	static GameState m_gameState;
};