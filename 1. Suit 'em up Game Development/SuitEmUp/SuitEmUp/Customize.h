#pragma once

#include <vector>
#include "State.h"


namespace sf{
	class RectangleShape;
	class RenderWindow;
}
class InputManager;

class Customize : public State {
public:
	Customize(InputManager* input);
	bool Init();
	void Exit();

	//bool HandleInput();
	bool Update();
	void Draw(sf::RenderWindow *p_window);
	std::string Next();
	void setNextState(std::string state);
	bool IsType(const std::string &type);

private:
	std::string next_state;

	std::string tempName_change;
	InputManager *m_input;
	std::vector<sf::RectangleShape*> m_rects;

};