#pragma once
#include "DxLib.h"

#define GameFPS 60

#define MicroSecond 1000000.0f
#define MillSecond  1000.0f
#define WaitTimeMill 3000

typedef struct FPS {

	LONGLONG FirstTakeTime = 0; //1フレーム目の計測時間
	LONGLONG NowTakeTime = 0; //現在の計測時間
	LONGLONG OldTakeTime = 0; //以前の計測時間

	float Deltatime = 0.000001f; //経過時間
	float Average = 0.0f; //現在のフレーム数
	int FrameCount = 1; //平均fps値
};

extern FPS fps;

//外部プロトタイプ宣言
extern void FPSInit();
extern void FPSCheck();
extern void FPSDraw();
extern void FPSWait();