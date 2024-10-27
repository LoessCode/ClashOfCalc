#include <raylib.h>

#include "ClashOfCalc.h"
#include "StateMachine.h"
#include "Menu.h"


void ClashOfCalc::run(StateMachine* stateMachine)
{

}

void ClashOfCalc::cleanup(StateMachine* stateMachine)
{
	stateMachine->pushState(
		Menu::Instance()
	);
}

