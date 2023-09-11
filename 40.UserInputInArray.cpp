#include <iostream>

int main()
{
    std::string names[3];
    int size = sizeof(names)/sizeof(names[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter a name #" << i + 1 << ":";
        std::getline(std::cin, names[i]); 
    }

    std::cout << "Here is the following names:\n";

    for(std::string name : names)
    {
        std::cout << name << '\n';
    }

    return 0;
}