#include <stdio.h>
#include <iostream>
#include <cstring>

/*
    I want to create an a simple tic-tac-toe application
    1) Allows UI for the game
    2) Basic rules

*/

static void setBoard(char board[3][3])
{
    for (int i = 0; i < 3; i++) { // Iterate over rows
        for (int k = 0; k < 3; k++) { // Iterate over columns
            std::cout << "[" << board[i][k] << "] "; // Print each cell
        }
        std::cout << "\n"; // Move to the next line after each row
    }
}

int main()
{
    char playerOne, playerTwo;
    char board [3][3] = {
        {'a',' ',' '},{' ',' ',' '},{' ',' ',' '},
    };
    std::cout<<"Welcome to Tic-Tac-Toe!\n";
    std::cout<<"For player one, input the symbol you wish to play with: ";
    std::cin>>playerOne;
    std::cout<<"For player two, input the symbol you wish to play with: ";

    // Check for whether symbols for playerOne vs playerTwo are equivalent
    while(std::cin>>playerTwo){
        if(playerOne == playerTwo){
            std::cout<<"Please enter a different symbol: ";
            continue;
        }else{
            break;
        }
    }
    setBoard(board);
}

