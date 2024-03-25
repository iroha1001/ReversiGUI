#pragma once
#include "GAME_OBJECT.h"
#include "VECTOR2.h"

class SCENE :
    public GAME_OBJECT
{
public:
    SCENE(class GAME* game);
    virtual ~SCENE();

    virtual void create() {}
    virtual void init() {}
    virtual void proc();
    virtual void nextScene() {}
    virtual void update() {}
    virtual void draw() {}

};

