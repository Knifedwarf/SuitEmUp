// Spawner.cpp

#include "Spawner.h"
#include "Truck.h"
#include "EnemyObject.h"
#include "EnemyBullet.h"
#include "PlayerBullet.h"

Spawner::Spawner(Truck* truck){
	m_truck = truck;
	m_time=0;
};

bool Spawner::Timer(/*deltatime*/){
	/*N�n formel h�r som g�r att tiden minskar...*/
	
	if(m_time>m_alarm){
		m_time=0;
		return true;
	};
	return false;
};

EnemyObject* Spawner::EnemySpawner(){
	EnemyObject* enemy = new EnemyObject(m_truck, nullptr);
	return enemy;
};
EnemyBullet* Spawner::BulletSpawner(EnemyObject* enemy, Truck* truck){
	EnemyBullet* bullet = new EnemyBullet(m_truck, nullptr);
	return bullet;
};

PlayerBullet* Spawner::NeedleSpawner(PlayerObject* player, Truck* truck){
	PlayerBullet* needle = new PlayerBullet(m_truck, nullptr);
	return needle;
};