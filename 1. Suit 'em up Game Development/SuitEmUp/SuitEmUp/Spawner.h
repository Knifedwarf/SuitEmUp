// Spawner.h

#pragma once;

#include "EnemyObject.h"
#include "EnemyBullet.h"
#include "PlayerBullet.h"

class Truck;

class Spawner{
public:
	Spawner(Truck* truck);
	bool Timer(/*deltatime*/);

	EnemyObject* EnemySpawner();
	EnemyBullet* BulletSpawner(EnemyObject* enemy, Truck* truck);

	PlayerBullet* NeedleSpawner(PlayerObject* player, Truck* truck);

private:
	float m_time;
	float m_alarm;

	Truck* m_truck;
};