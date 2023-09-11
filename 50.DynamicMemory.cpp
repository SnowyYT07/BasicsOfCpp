#include <iostream>
int main()
{
    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running. Use the 'new'
    //                  operator to allocate memory in the heap rather
    //                  than the stack.
    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    std::cout << "Address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';
    delete pNum; // if we dont need

    char *pChars = NULL;
    int size;

    std::cout << "How many Chars you want enter in: ";
    std::cin >> size;

    pChars = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter the Char #" << i + 1 << ": ";
        std::cin >> pChars[i];
    }
    for(int i = 0; i < size; i++){std::cout << pChars[i] << " "; }

    delete[] pChars; 

    return 0;
}