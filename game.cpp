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

int Game::start(){
    bool state;
    while(true){
        this->getState()->print();
        int make_move_response = this->player1->makeMove();
        if(!make_move_response){
            std::cerr << "Error making a move";
            return 2;
        }
        state = this->getState()->checkEnd();
        if(state == FINISHED){
            break;
        }
        int make_move_response = this->player2->makeMove();
        if(!make_move_response){
            std::cerr << "Error making a move";
            return 2;
        }
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
    return 0;
}

int Game::end(){

}

State * Game::getState(){
    return this->state;
}

void Game::importGame(){

}

void Game::exportGame(){

}