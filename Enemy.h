#pragma once
class Enemy
{
public:
	// Enemy x and y
	int x;
	int y;
	// Enemy shape
	ALLEGRO_BITMAP* bmp;
	// Enemy speed
	int sx;
	int sy;
	// Enemy type
	int type;

	// Enemy constructor and deconstructor
	Enemy();
	~Enemy();

	// move function
	void Move(int px, int py);
};

