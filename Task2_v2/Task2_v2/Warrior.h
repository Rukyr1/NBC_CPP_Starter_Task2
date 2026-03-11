#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior();

	virtual void attack() override;
};