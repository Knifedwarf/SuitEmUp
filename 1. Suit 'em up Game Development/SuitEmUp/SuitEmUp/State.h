#pragma once

#include <string>
class InputManager;

namespace sf{
	class RenderWindow;
}

class State
{
public:
	virtual ~State() {};
	
	virtual bool Init() = 0;
	virtual void Exit() = 0;

	//virtual bool HandleInput() = 0;
	virtual bool Update() = 0;
	virtual void Draw(sf::RenderWindow *p_window) = 0;

	virtual std::string Next() = 0;
	virtual void setNextState(std::string state) = 0;
	virtual bool IsType(const std::string &type) = 0;

	float static deltatime;
	//unsigned int ticks;

	//static InputManager* m_InputManager;

};