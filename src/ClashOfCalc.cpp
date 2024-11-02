#include <raylib.h>
#include <iostream>

#include "GameState.h"
#include "ClashOfCalc.h"
#include "StateMachine.h"
#include "Menu.h"


void ClashOfCalc::run()
{
	std::cout << "Hello World\n";
}

GameState* ClashOfCalc::next_state()
{
	return this->Instance();
}

