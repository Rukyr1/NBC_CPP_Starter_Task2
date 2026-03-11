#pragma once
#include "Player.h"

class Thief : public Player
{
public:
	Thief();

	virtual void attack() override;
};