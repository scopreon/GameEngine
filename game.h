#ifndef GAME_H
#define GAME_H

class Player;
class State;

class Game{
    public:
        Game();
        State *getState();
        int start();
        int end();
        virtual void importGame();
        virtual void exportGame();
    private:
        State *state;
        Player *player1;
        Player *player2;
};

#endif