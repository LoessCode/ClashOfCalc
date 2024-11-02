#pragma once
#include "GameState.h"

class Menu : public GameState {
public:
	int windowHeight = 1080;
	int windowWidth = 1920;
	bool hasNextState = true;

	void run();
	GameState* next_state();

	static Menu* Instance() {
		return &m_gameState;
	}
private:
	static Menu m_gameState;
};