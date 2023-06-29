#ifndef GAME_H
#define GAME_H

class Player;
class State;

class Game{
    public:
        Game();
        void start();
        void end();
        State *getState();
        void importGame();
        void exportGame();
    private:
        State *state;
        Player *player1;
        Player *player2;
};

#endif