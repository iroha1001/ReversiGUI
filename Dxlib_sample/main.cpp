#include"DxLib.h"
#include "GAME.h"
#define GameWidth 1000
#define GameHeight 1000
#define GameColor 32
#define GameTitle "TEST"



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetOutApplicationLogValidFlag(FALSE);             //Log.txtを出力しない
	ChangeWindowMode(TRUE);                           // ウィンドウモードを変更
	SetGraphMode(GameWidth, GameHeight, GameColor);
	SetWindowSize(GameWidth, GameHeight);
	SetMainWindowText(GameTitle);
	SetBackgroundColor(0, 0, 0);
	SetWaitVSyncFlag(TRUE);
	SetAlwaysRunFlag(TRUE);

	//SetWindowIconID();　アイコンつけたければどうぞ

	if (DxLib_Init() == -1) {
		return -1;
	}
	
	SetDrawScreen(DX_SCREEN_BACK); //ダブルバッファリング

	GAME game;
	game.run();

	DxLib_End(); //DxLib終了

	return 0;
}