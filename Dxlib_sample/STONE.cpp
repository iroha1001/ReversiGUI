#include "STONE.h"
#include "DxLib.h"

STONE::STONE(GAME* game):ACTOR(game)

{
}

void STONE::draw()
{
	DrawCircle(0, 0, 2, GetColor(0, 0, 0));
}

void STONE::proc()
{
}


