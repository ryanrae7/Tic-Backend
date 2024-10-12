#include <stdio.h>
#include <iostream>
#include <cstring>
#include <utility>
#include <limits>


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

char inputValidationPlayer(char &c){
    while(1){
        if(std::cin >> c){
            if(std::cin.peek() == '\n'){
                break;
            }else{
                std::cout << "Too many characters entered. Please enter a single character: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
            }
        }else{
            std::cout << "Enter in a valid character: " <<std::endl;
            // Clear the buffer (https://stackoverflow.com/questions/2075898/good-input-validation-loop-using-cin-c)
            std::cin.clear(); // clears the error flag on cin (so that future I/O operations will work correctly)
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore until \n
        }
    }
    return c;
}


/*
    Conditions for winning:
    1) 
*/
bool checkWinner(char board[3][3])
{
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++)
        {
            
        }
    }
}


int main()
{
    char playerOne, playerTwo;
    char board [3][3] = {
        {' ',' ',' '},{' ',' ',' '},{' ',' ',' '},
    };
    std::cout<<"Welcome to Tic-Tac-Toe!\n";
    // Get symbol for player One and Two
    std::cout<<"\nFor player one, input the symbol you wish to play with: ";
    inputValidationPlayer(playerOne);

    std::cout<<"\nFor player two, input the symbol you wish to play with: ";
    while(inputValidationPlayer(playerTwo) == playerOne){
        std::cout<<"Please enter another symbol: ";
    }

    // Convert players into array
    char players [2] = {playerOne, playerTwo};

    setBoard(board);
    
    // Maximum number of turns possible for a 3x3 tic tac toe
    for(int i = 0; i < 9; i++){
        // Player one and player two
        for(int k = 0; k < 2; k++){
            int row, col; // Temporary column and row variables
            std::cout<<"\nChoose coordinates: " << std::endl;
            std::cout<<"Row for player "<< k+1 <<": ", std::cin>>row;
            std::cout<<"Column for player "<< k+1 <<": ", std::cin>>col;
            board[row-1][col-1] = players[k];
            setBoard(board);

            
        }
    }
    

   return 0;
}

