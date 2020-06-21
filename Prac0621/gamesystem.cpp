#include "gamesystem.h"
#include "player_bullet_a.h"

void GameSystem::Update() 
{
	for (int i = 0; i < bullets.size(); i++) {
		bullets[i]->Update();
	}
}
void GameSystem::Render() 
{
	for (int i = 0; i < bullets.size(); i++) {
		bullets[i]->Render();
	}
}

void GameSystem::PrintPlayerBullet(float x, float y) 
{
	int speed = 8;

	for (int i = 0; i < 5; i++) {
		float deltaAngle = (i * 8 + 70) * 3.141592f / 180.0f;

		float vx = cos(deltaAngle) * speed;
		float vy = -sin(deltaAngle) * speed;
		PlayerBulletA* newBullet = new PlayerBulletA(x, y, vx, vy);
		bullets.push_back(newBullet);
	}
}