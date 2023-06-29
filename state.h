#ifndef STATE_H
#define STATE_H

class Game;

enum states {PLAYING, FINISHED, WINNER_1, WINNER_2, DRAW};

class State{
    public:
        bool turn;
        int evaluatePosition();
        State* possibleStates();
        bool checkEnd(){return PLAYING;}
        int winner(){return DRAW;}
        void print();
};


#endif