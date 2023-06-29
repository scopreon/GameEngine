#ifndef CHESS_GAME_H
#define CHESS_GAME_H
#include "game.h"
#include "player.h"
#include "state.h"

class Game{
    public:
        void start();
        void end();
        void getState();
        void importGame();
        void exportGame();
        void printState();
    private:
        State *state;
        Player *player1;
        Player *player2;
};

#endif