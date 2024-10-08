#pragma once

class Vector2 {

	float x;
	float y;

public:

	Vector2(float _x, float _y);
	Vector2();

	float getX();
	float getY();

	void setX(float x);
	void setY(float y);
};
