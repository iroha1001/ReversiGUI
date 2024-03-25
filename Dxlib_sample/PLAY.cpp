#include "PLAY.h"
#include "CONTAINER.h"
#include "STONE.h"
PLAY::PLAY(GAME* game) :SCENE(game)
{
}

PLAY::~PLAY()
{
}

void PLAY::create()
{
	

		Play = game()->container()->play();
		for (int i = 0; i < BoardSize; i++) {
			for (int j = 0; j < BoardSize; j++) {
				game()->Stones[i][j] = new STONE(game());
			}
	}

	
}

void PLAY::draw()
{
	SetFontSize(Play.fontSize);
	DrawString(Play.pos.x, Play.pos.y, Play.text, Play.textColor);
}

void PLAY::nextScene(){

	game()->changeScene(GAME::RESULT_ID);
}
