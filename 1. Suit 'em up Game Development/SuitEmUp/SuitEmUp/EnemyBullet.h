// EnemyBullet.h

#include "Bullet.h"

class PlayerObject;
class Truck;

class EnemyBullet : public Bullet{
public:
	EnemyBullet(Truck* truck, sf::Sprite* sprite = nullptr);
};