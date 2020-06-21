#pragma once
#include <vector>
class Bullet;

using namespace std;

class GameSystem 
{
public:

	vector<Bullet*> bullets;

	void Update();
	void Render();

	void PrintPlayerBullet(float x, float y);

};