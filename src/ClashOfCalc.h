﻿#include "GameState.h"

class ClashOfCalc : public GameState {
public:
	int windowHeight = 1080;
	int windowWidth = 1920;

	void run(StateMachine* stateMachine);
	void cleanup(StateMachine* stateMachine);

private:
};