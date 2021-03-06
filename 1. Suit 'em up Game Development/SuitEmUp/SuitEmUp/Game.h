#pragma once

#include "State.h"
#include <vector>

namespace sf{
	class RenderWindow;
}
class InputManager;

class Game : public State {
public:
	Game(InputManager * input);
	bool Init();
	void Exit();

	//bool HandleInput();
	bool Update();
	void Draw(sf::RenderWindow *p_window){};

	std::string Next();
	void setNextState(std::string state);
	bool IsType(const std::string &type);

private:
	std::string next_state;

};