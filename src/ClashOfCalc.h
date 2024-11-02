#include "GameState.h"

class ClashOfCalc : public GameState {
public:
	int windowHeight = 1080;
	int windowWidth = 1920;

	void run();
	GameState* next_state();

	static ClashOfCalc* Instance() {
		return &m_gameState;
	}
private:
	static ClashOfCalc m_gameState;
};