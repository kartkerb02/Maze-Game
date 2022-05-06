#pragma once
#ifndef OBJECT_H
#define OBJECT_H

#include "Game.h"
#include "SDL.h"
#include "Map.h"
#include "TextureCreator.h"

#include <string>

//#include "SDL_ttf.h"

class Object
{
    public:
        Object(float x_init, float y_init);

        void update();
        void handleEvents();
        void render();
        virtual ~Object();

        //int right(){return xpos + destR.w;}
        //int left(){return xpos;}
        //int bottom(){return ypos + destR.h;}
        //int top(){return ypos;}

        bool CheckColl();
        bool yulu = false;
        bool stunned = false;
        SDL_Rect camera;

        float Energy;
        float Money;
        float Score;

        SDL_Texture* objtex;
        SDL_Rect srcR, destR;

        float xpos;
        float ypos;

    protected:

    private:
        float speed;
        int direction = 1;
        int vx = 0;
        int vy = 0;

        int outdim;




};

#endif // OBJECT_H

