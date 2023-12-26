//
// Created by jagch on 12/26/2023.
//

#include "Game.h"

void StrategoGame::populate_all(){
    for(auto & i : Board){
        for(auto & j : i){
            j.color = 'R';
        }
    }
}