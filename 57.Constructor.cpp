#include <iostream>

class Example{
    public:
        std::string name;
        int value1;
        double value2;

    Example(std::string name, int value1, double value2){
        this->name = name;
        this->value1 = value1;
        this->value2 = value2; 
    }

};
// Using like this would work too
class Example2{
    public:
        std::string name;
        int value1;
        double value2;

    Example2(std::string X, int Y, double Z){
        name = X;
        value1 = Y;
        value2 = Z; 
    }

};

int main()
{
    // Constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Example Example1("Snowy", 25, 200.12);

    std::cout << Example1.name << '\n';
    std::cout << Example1.value1 << '\n';
    std::cout << Example1.value2 << '\n';
    
    Example2 Example2("Mene", 26, 220.42);

    std::cout << Example2.name << '\n';
    std::cout << Example2.value1 << '\n';
    std::cout << Example2.value2 << '\n';

    return 0;
}