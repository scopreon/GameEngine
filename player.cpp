#include <iostream>
#include <fstream>
#include "player.h"

Player::Player(Game * game){
    this->game = game;
}

void Player::makeMove(){
    char response[64];
    std::cin >> response;
}