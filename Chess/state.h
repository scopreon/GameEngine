#ifndef CHESS_STATE_H
#define CHESS_STATE_H
#include "game.h"

class State{
    public:
        bool turn;
        int evaluatePosition();
        int possibleStates();
};

#endif