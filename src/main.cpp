// ClashOfCalc.cpp : Defines the entry point for the application.
//

#include "ClashOfCalc.h"
#include "StateMachine.h"

using namespace std;

int main()
{
	StateMachine* stateMachine = new StateMachine;

	stateMachine->pushState(
		ClashOfCalc::Instance()
	);

	stateMachine->run();
}
