#pragma once
#include "GAME.h"
#include "VECTOR2.h"

class GAME_OBJECT
{
public:
	GAME_OBJECT(class GAME* game);
	virtual ~GAME_OBJECT();

	GAME* game() { return Game; }

private:
	GAME* Game;
};

