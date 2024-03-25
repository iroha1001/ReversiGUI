#pragma once
#include "SCENE.h"

class PLAY :
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
    DATA Play;

public:
    PLAY(class GAME* game);
    ~PLAY();

    void create() override;
    void draw()override;
    void nextScene()override; 
    
};

