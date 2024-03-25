#pragma once
#include "SCENE.h"
class TITLE :
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
    DATA Title;

public:
    TITLE(class GAME* game);
    ~TITLE();

    void create() override;
    void draw()override;
    void nextScene()override;

};

