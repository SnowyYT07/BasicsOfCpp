#include <iostream>

int main()
{
    // we need put 5 example1 here

    std::string examples[5] = {"example", "example", "example"};
    
    fill(examples, examples + 5, "example");

    for(std::string example : examples){
       std::cout << example << ' '; 
    }
    std::cout << '\n';
    const int SIZE = 9;

    std::string examples2[SIZE];
    fill(examples2, examples2 + (SIZE/3), "example1");
    fill(examples2 + (SIZE/3), examples2 + (SIZE/3)*2, "example2");
    fill(examples2 + (SIZE/3)*2, examples2 + SIZE, "example3");

    for(std::string example2 : examples2){
        std::cout << example2 << '\n';    
    }

    return 0;
}