#ifndef STATE_H
#define STATE_H

class Game;

enum states {PLAYING, FINISHED, WINNER_1, WINNER_2, DRAW};

class State{
    public:
        bool turn;
        std::vector<State> possibleStates();
        
        virtual int evaluatePosition();
        virtual bool checkEnd(){return PLAYING;}
        virtual int winner(){return DRAW;}
        virtual void print();
};


#endif