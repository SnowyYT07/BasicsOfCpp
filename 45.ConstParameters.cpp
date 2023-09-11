#include <iostream>

void printInfo(const std::string name, const int value1){
    // std::string name = " "; // This will make the code not compile because you cant change an const value
    // int value = 123123; // This will make the code not compile because you cant change an const value
    std::cout << "Name: " << name << '\n';
    std::cout << "Value1: " << value1 << '\n';
}

int main()
{
    // const parameter = parameter that is effectivly read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Snowy";
    int value1 = 123;

    printInfo(name, value1);
    return 0;
}
