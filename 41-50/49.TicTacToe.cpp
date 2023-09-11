#include <iostream>
#include <ctime>

void drawBoard(char *spaces)
{
    using namespace std;
    cout
    <<"\t\t\t\t\t\t\t"<<spaces[0]<<" | "<<spaces[1]<<" | "<<spaces[2]<<"\n"
    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
    <<"\t\t\t\t\t\t\t"<<spaces[3]<<" | "<<spaces[4]<<" | "<<spaces[5]<<"\n"
    <<"\t\t\t\t\t\t\t"<<"-- --- --- \n"
    <<"\t\t\t\t\t\t\t"<<spaces[6]<<" | "<<spaces[7]<<" | "<<spaces[8]<<"\n";
}
void playerMove(char *spaces, char player)
{
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }

}
bool checkWinner(char *spaces, char player, char computer)
{
/*
    0 1 2
    3 4 5
    6 7 8

*/
    if( (spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]) ){
        spaces[0] == player ? std::cout << "You Win!" : std::cout << "You lose!\n";
    }
    else if( (spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]) ){
        spaces[3] == player ? std::cout << "You Win!" : std::cout << "You lose!\n";
    }
    else if( (spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]) ){
        spaces[6] == player ? std::cout << "You Win!" : std::cout << "You lose!\n";
    }

    else if( (spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]) ){
        spaces[6] == player ? std::cout << "You Win!" : std::cout << "You lose!\n";
    }    
    else if( (spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]) ){
        spaces[6] == player ? std::cout << "You lose!" : std::cout << "You Win!\n";
    }
    else if( (spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]) ){
        spaces[6] == player ? std::cout << "You lose!" : std::cout << "You Win!\n";
    }

    else if( (spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]) ){
        spaces[6] == player ? std::cout << "You lose!" : std::cout << "You Win!\n";
    }    
    else if( (spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]) ){
        spaces[6] == player ? std::cout << "You Win!" : std::cout << "You lose!\n";
    }
    else{return false;}

    return true;
}
bool checkTie(char *spaces)
{

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A LIE!\n";
    return true;
}



int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }



        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }


    }
    std::cout << "Thanks for playing!";

    return 0;
}