#ifndef PLAYER_H
#define PLAYER_H

class Game;

class Player{
    public:
        Player(Game * game);
        char name[64];
        void makeMove();
    private:
        Game *game;
        // upcasting so can be assigned
};

#endif