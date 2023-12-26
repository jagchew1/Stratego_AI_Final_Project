#include <iostream>
#include "Game.h"
#include "Game.cpp"
#include "Square.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    StrategoGame test;
    test.populate_all();
    test.print();
    return 0;
}
