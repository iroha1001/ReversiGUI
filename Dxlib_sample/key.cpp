#include"key.h"

int NowKeyPressFrame[KeyKindMax];
int PreviousKeyPressFrame[KeyKindMax];

void KeyInit() {

	for (int i = 0; i < KeyKindMax; i++) {

		NowKeyPressFrame[i] = 0;
		PreviousKeyPressFrame[i] = 0;
	}

	return;
}


void KeyUpdate() {

	
	char KeyState[KeyKindMax];

	
	GetHitKeyStateAll(KeyState);

	
	for (int i = 0; i < KeyKindMax; i++) {

		PreviousKeyPressFrame[i] = NowKeyPressFrame[i];

		
		if (KeyState[i] > 0) {
	

			NowKeyPressFrame[i]++;
		}

		else if (KeyState[i] == 0) {

			
			NowKeyPressFrame[i] = 0;
		}
	}

	return;
}


bool KeyDown(int KEY_INPUT_) {

	if (NowKeyPressFrame[KEY_INPUT_] > 0) {

		return true;
	}
	{
		return false;
	}
}


bool KeyClick(int KEY_INPUT_) {

	if (NowKeyPressFrame[KEY_INPUT_] == 0 && PreviousKeyPressFrame[KEY_INPUT_] > 0) {

		return true;
	}
	{
		return false;
	}
}

int KeyPressFrame(int KEY_INPUT_) {

	return NowKeyPressFrame[KEY_INPUT_];
}