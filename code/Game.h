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
    StrategoGame(){
            is_game_over = false;
            player_turn = true;
            turn_counter = 0;
            origin = nullptr;
            destination = nullptr;
    }
    void print(){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                switch(Board[i][j].color){
                    case 'B':
                        cout << "B" << Board[i][j].value;
                        break;
                    case 'R':
                        cout << "R" << Board[i][j].value;
                        break;
                    case 'W':
                        cout << "W";
                        break;
                    default:
                        cout << "_";
                        break;
                }
                cout << "  ";
            }
            cout << endl;
        }
    }
    void populate_all();

};

#endif //STRATEGO_AI_FINAL_PROJECT_GAME_H
