#include <iostream>
#include <fstream>
#include "game.h"
#include "state.h"
#include "player.h"
Game::Game(){
    this->player1 = new Player(this);
    this->player2 = new Player(this);
    this->state = new State();
}

void Game::start(){
    bool state;
    while(true){
        this->getState()->print();
        this->player1->makeMove();
        state = this->getState()->checkEnd();
        if(state == FINISHED){
            break;
        }
        this->player2->makeMove();
        state = this->state->checkEnd();
        if(state == FINISHED){
            break;
        }
    }
    this->end();
    int winner = this->getState()->winner();
    if(winner == DRAW){
        std::cout << "DRAW" << std::endl;
    }
    else if(winner == WINNER_1){
        std::cout << "PLAYER 1 WINS!" << std::endl;
    }
    else if(winner == WINNER_2){
        std::cout << "PLAYER 2 WINS!" << std::endl;
    }
    else{

    }
    std::cout << "Thank you for playing" << std::endl;
}

void Game::end(){

}

State * Game::getState(){
    return this->state;
}

void Game::importGame(){

}

void Game::exportGame(){

}