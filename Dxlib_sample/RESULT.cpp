#include "RESULT.h"
#include "CONTAINER.h"

RESULT::RESULT(GAME* game) :SCENE(game)
{
}

RESULT::~RESULT()
{
}

void RESULT::create()
{
	

		Result = game()->container()->result();
	
}

void RESULT::draw()
{
	SetFontSize(Result.fontSize);
	DrawString(Result.pos.x, Result.pos.y, Result.text, Result.textColor);
}

void RESULT::nextScene()
{
	game()->changeScene(GAME::TITLE_ID);
}

