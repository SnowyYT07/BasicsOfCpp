#include <iostream>

int main()
{
    // Pointers = variable that stores a memory address of another variables
    // sometimes it's easier to work with an address
    // & address of operator
    // * dereference operator

    std::string name = "Snowy";
    std::string *pName = &name; // pName is the pointer
    std::string array[3] = {"Example1", "example2", "Example3"};
    std::string *pArray = array;

    std::cout << "Just Calling pName: " << pName << '\n';
    std::cout << "Calling *pName: " << *pName << '\n';
    std::cout << "Just Calling pArray: " << pArray << '\n';
    std::cout << "Calling *pArray: " << *pArray << '\n';



    return 0;
}