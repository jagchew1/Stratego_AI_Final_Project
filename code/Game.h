//
// Created by jagch on 12/26/2023.
//

#ifndef STRATEGO_AI_FINAL_PROJECT_GAME_H
#define STRATEGO_AI_FINAL_PROJECT_GAME_H

#include <array>
#include <vector>
#include <iostream>
#include <cmath>
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
    void print_locations(){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cout << "(" << Board[i][j].x << ", " << Board[i][j].y << ") ";
            }
            cout << endl;
        }
    }
    void populate_all();
    bool legal_moves(bool);
    bool resolve_moves(bool, Square *, Square *);
};

#endif //STRATEGO_AI_FINAL_PROJECT_GAME_H
