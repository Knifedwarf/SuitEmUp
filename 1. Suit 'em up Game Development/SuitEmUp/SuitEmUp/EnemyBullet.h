// EnemyBullet.h

#pragma once

#include "Bullet.h"

class PlayerObject;
class Truck;

class EnemyBullet : public Bullet{
public:
	EnemyBullet(Truck* truck, sf::Sprite* sprite = nullptr);

};