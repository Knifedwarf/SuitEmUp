// PlayerBullet.h

#include "Bullet.h"

class Truck;
class PlayerObject;

class PlayerBullet : public Bullet{
public:
	PlayerBullet(Truck* truck, PlayerObject* player, sf::Sprite* sprite = nullptr);
};