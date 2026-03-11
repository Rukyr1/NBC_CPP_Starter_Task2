#pragma once
#include "Player.h"

class Archer: public Player
{
public:
	Archer();

	virtual void attack() override;
};