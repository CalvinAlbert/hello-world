#pragma once
enum CollisionMethod
{
	TopLeft,
	Centre,
	InsideRect
};

class Player
{
	// PRIVATE VARIABLES
	// x and y of the player
	int x;
	int y;
	//shape of the player
	ALLEGRO_BITMAP* bmp;
	// score and health of the player
	int score;
	int health;
	// speed x and y of the player
	int sx;
	int sy;

public:
	CollisionMethod collisionMethod;

	// player constructor and deconstructor
	Player();
	~Player();


	// Get/Set functions for data
	void SetX(int newx);
	int GetX();
	void SetY(int newy);
	int GetY();
	void SetSX(int newsx);
	int GetSX();
	void SetSY(int newsy);
	int GetSY();
	void SetScore(int newscore);
	int GetScore();
	void SetHealth(int newhealth);
	int GetHealth();
	void SetBmp(ALLEGRO_BITMAP* newbmp);
	ALLEGRO_BITMAP* GetBmp();

	// collision detection ~ 3 methods
	void Move();
	bool Collision(Enemy* o1); //no need to pass Player as a parameter. The function belongs to Player class now and has access to all its members
	bool Collision1(Enemy* o1);
	bool Collision2(Enemy* o1);
	bool Collision3(Enemy* o1);

};

