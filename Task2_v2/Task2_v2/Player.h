#pragma once
class Player
{
public:
	Player();

	virtual ~Player() { }

	virtual void attack() = 0;
};