#pragma once
#include <cmath>
bool isCircelCollided(float ax, float ay, float ar
	, float bx, float by, float br)
{
	float dx = bx - ax;
	float dy = by - ay;

	float d = sqrt(dx * dx + dy * dy);

	if (ar+br < d) 
		return false;

	return true;
}
bool isBoxCoollided(float ax, float ay, float aWidth, float aHeight
	, float bx, float by, float bWidth, float bHeight)
{
	bool A = false;
	bool B = false;

	if (ax + aWidth > bx && bx + bWidth > ax) A = true;
	if (ay + aHeight > by && by + bHeight > ay) B = true;

	if (A && B) return true;

	return false;

}