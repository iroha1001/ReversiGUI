#pragma once
#include "SCENE.h"

class RESULT :
    public SCENE
{
public:
    struct DATA {
        unsigned int textColor;
        float fontSize;
        VECTOR2 pos;
        char text[16];
    };

private:
    DATA Result;
public:
    RESULT(class GAME* game);
    ~RESULT();

    void create() override;
    void draw()override;
    void nextScene()override;


};

