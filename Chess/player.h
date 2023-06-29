#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H
#include "game.h"

class Player{
    public:
        char name[64];
        void makeMove();
    private:
        Game *game;
        // upcasting so can be assigned
};

#endif