#include <iostream>
#include <fstream>
#include "game.h"
using namespace std;

int main() {
  // Create and open a text file
    cout << "hello" << endl;
    char response[64];
    std::cin >> response;
    std::cout << response << std::endl;
    Game *game = new Game();
    game->start();
}
