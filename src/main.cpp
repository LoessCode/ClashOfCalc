// ClashOfCalc.cpp : Defines the entry point for the application.
//

#include "ClashOfCalc.h"
#include "StateMachine.h"
#include "GameState.h"

using namespace std;

int main()
{
	StateMachine* stateMachine = new StateMachine;

	stateMachine->push_state(
		ClashOfCalc::Instance()
	);

	stateMachine->run();
}
