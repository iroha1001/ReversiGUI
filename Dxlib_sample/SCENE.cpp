#include "SCENE.h"



SCENE::SCENE(GAME* game)
:GAME_OBJECT(game){
}

SCENE::~SCENE()
{
}



void SCENE::proc()
{
	update();
	draw();
	nextScene();
}

