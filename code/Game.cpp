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
    for(int i=0; i<10; i++){
        for(int j = 0; j<10; j++){
            Board[i][j].x = j;
            Board[i][j].y = i;
        }
    }
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

bool StrategoGame::legal_moves(bool player) {
    bool done = false;
    if(player){
        for(int i = 0; i < 10 && !done; i++){
            for(int j = 0; j < 10 && !done; j++){
                if(Board[i][j].color=='B'){
                    //if moves exist, done = true. If not, continue.
                }
            }
        }
    }else{
        for(int i = 0; i < 10 && !done; i++){
            for(int j = 0; j < 10 && !done; j++){
                if(Board[i][j].color=='R'){
                    //if moves exist, done = true. If not, continue.
                }
            }
        }
    }
    if(done){
        return true;
    }
    return false;
}

bool StrategoGame::resolve_moves(bool player, Square *o, Square *d) {
    //CHECK THAT MOVE IS LEGAL
    if(!player && o->color!='R'|| player && o->color!='B') { //if piece color doesn't match player color, return false
        return false;
    }else if(o->value=='B' || o->value=='F'){ // if it's a flag or bomb, return false
        return false;
    }else if(o->value!='9' && abs((o->x - d->x) + (o->y - d->y))!=1){ // if non 9 tries to move multiple squares (or diagonal), return false
        return false;
    }else if(d->x < 0 || d->x > 9){ // if piece destination is off the board (x dimension), return false
        return false;
    }else if(d->y < 0 || d->y > 9){ //if piece destination is off the board (y dimension), return false
        return false;
    }else if(d->y==4 || d->y==5){ //if piece destination is in the water, return false
        if(d->x==2 || d->x==3 || d->x==6 || d->x==7){
            return false;
        }
    }else if(player && d->color=='B' || !player && d->color=='R') { //if player already has a piece at destination, return false
        return false;
    }else if(o->value=='9'){
        if(abs(o->x - d->x)>0 && abs(o->y - d->y)>0){ //if 9 tries to move not in a straight line
            return false;
        }else{
            bool blocked = false;
            if(o->x < d->x){
                for(int i = o->x; i < d->x; i++){
                    if(Board[])
                }
            }else if(o->x > d->x) {

            }else if(o->y < d->y){

            }else{

            }
        }
    }
}