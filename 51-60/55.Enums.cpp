#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){
    // enums = a user-defined data type that consists
    // of paired name-integer constants.
    // GREAT if you have a set of potential options

    // std::string today = "sunday"; //using this will
    Day today = monday;

    switch(today){
        case sunday: std::cout << "It is sunday!\n"; break;
        case monday: std::cout << "It is monday!\n"; break;
        case tuesday: std::cout << "It is tuesday!\n"; break;
        case wednesday: std::cout << "It is wednesday!\n"; break;
        case thursday: std::cout << "It is thursday!\n"; break;
        case friday: std::cout << "It is friday!\n"; break;
        case saturday: std::cout << "It is saturday!\n"; break;
    }






    return 0;
}