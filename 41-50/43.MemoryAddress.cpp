#include <iostream>

int main()
{
    // memory address = a location in memory where the data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Snowy";
    int value1 = 12;
    bool isStored = true;

    std::cout << "Value of str name: " << name << '\n';
    std::cout << "Value of int value1: " << value1 << '\n';
    std::cout << "Value of bool isStored(1 = true 0 = false): "  << isStored << '\n';

    std::cout << "Memory address of name: " << &name << '\n'; // & is used to print the memory address value &name
    std::cout << "Memory address of value1: " << &value1 << '\n';
    std::cout << "Memory adress of isStored: " << &isStored << '\n';

    return 0;
}
