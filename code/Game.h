//
// Created by jagch on 12/26/2023.
//

#ifndef STRATEGO_AI_FINAL_PROJECT_GAME_H
#define STRATEGO_AI_FINAL_PROJECT_GAME_H

#include <array>
#include <vector>
#include <iostream>
#include "Square.h"

using namespace std;

class StrategoGame{
private:
    Square Board[10][10];
    bool is_game_over;
    bool player_turn;
    Square *origin;
    Square *destination;
    int turn_counter;

public:
    StrategoGame();
    void print();
    void populate_all();

};

#endif //STRATEGO_AI_FINAL_PROJECT_GAME_H
