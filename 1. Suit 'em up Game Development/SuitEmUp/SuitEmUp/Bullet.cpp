//Bullet.cpp

#include "Bullet.h"
#include "Truck.h"

bool Bullet::Update(/*deltatime*/){
	m_position += m_velocity;
	//if(m_truck->GetPosition()==10415 || || ||) return true;
	return false;
};