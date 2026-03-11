#pragma once
#include "Player.h"

class Magician : public Player
{
public:
	Magician();

	virtual void attack() override;
};

