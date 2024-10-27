#pragma once
#include "GameState.h"
#include "StateMachine.h"

class Menu : public GameState {
public:
	int windowHeight = 1080;
	int windowWidth = 1920;

	void run(StateMachine* stateMachine);
	void cleanup(StateMachine* stateMachine);
};