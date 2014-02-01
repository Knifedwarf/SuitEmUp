//EnemyObject.h

#include "MovingGameObject.h"

#pragma once

class Truck;

class EnemyObject : public MovingGameObject{
public:
	EnemyObject(Truck* truck, sf::Sprite* sprite = nullptr);
	bool Update(/*deltatime*/);

private:
	float m_cooldown;
};