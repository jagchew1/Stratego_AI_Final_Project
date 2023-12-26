//
// Created by jagch on 12/26/2023.
//

#include "Game.h"

StrategoGame::StrategoGame(){
    is_game_over = false;
    player_turn = true;
    turn_counter = 0;
    origin = nullptr;
    destination = nullptr;
}

void StrategoGame::print(){
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

void StrategoGame::populate_all(){
    for(auto & i : Board){
        for(auto & j : i){
            j.color = 'R';
        }
    }
}