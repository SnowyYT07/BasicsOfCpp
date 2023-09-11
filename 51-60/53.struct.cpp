#include <iostream>

struct example{
    std::string name;
    double value;
    bool value1;
};


int main(){
    
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operator"

    example example1;
    example1.name = "Snowy";
    example1.value = 3.21;
    example1.value1 = true;

    example example2;
    example2.name = "Mene";
    example2.value = 12.3;
    example2.value1 = false;

    std::cout << example1.name << '\n';
    std::cout << example1.value << '\n';
    std::cout << example1.value1 << '\n';

    std::cout << example2.name << '\n';
    std::cout << example2.value << '\n';
    std::cout << example2.value1 << '\n';

    return 0;
}