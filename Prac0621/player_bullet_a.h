#pragma once
#include "bullet.h"
class PlayerBulletA : public Bullet 
{
public:
	PlayerBulletA(float x, float y, float vx, float vy);
	void Update() override;
	void Render() override;

	float posX;
	float posY;
	float velX;
	float velY;

};