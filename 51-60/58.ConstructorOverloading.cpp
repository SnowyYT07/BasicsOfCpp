#include <iostream>

class Example{
    public:
    int value1;
    int value2;
    int value3;

    Example(int value1)
    {
        this->value1 = value1;
        std::cout << "Example with 1 values\n";  
        std::cout << "Value 1: " << value1 << '\n';
    
    }
    Example(int value1, int value2)
    {
        this->value1 = value1;
        this->value2 = value2;
        std::cout << "Example with 2 values\n";  
        std::cout << "Value 1: " << value1 << '\n';
        std::cout << "Value 2: " << value2 << '\n';
    }
    Example(int value1, int value2, int value3)
    {
        this->value1 = value1;
        this->value2 = value2;
        this->value3 = value3;
        std::cout << "Example with 3 values\n";    
        std::cout << "Value 1: " << value1 << '\n';    
        std::cout << "Value 2: " << value2 << '\n';  
        std::cout << "Value 3: " << value3 << '\n'; 
    }
};



int main()
{
    //overloaded constructors = multiple constructors with same name but different parameters 
    //                          allows for varying arguments when instantiating an object
    Example example1(1);
    Example example2(1, 2);
    Example example3(1, 2, 3);

    return 0;
}