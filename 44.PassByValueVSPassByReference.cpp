#include <iostream>
void swapBYaddress(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
    
    std::cout << "X (After change): " << x << '\n';
    std::cout << "Y (After change): " << y << '\n';
    std::cout << "X (After change): " << &x << '\n';
    std::cout << "Y (After change): " << &y << '\n';
}
void swapBYvalue(std::string x, std::string y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
    
    std::cout << "A (After change): " << x << '\n';
    std::cout << "B (After change): " << y << '\n';
    std::cout << "A (After change): " << &x << '\n';
    std::cout << "B (After change): " << &y << '\n';
}

int main(){
    std::string X = "Water";
    std::string Y = "Coffee";
    std::string A = "Coca-Cola";
    std::string B = "Pepsi";

    std::cout << "##########Pass By Reference##########\n";
    std::cout << "X (Before change): " << X << '\n';
    std::cout << "Y (Before change): " << Y << '\n';
    std::cout << "X (Before change): " << &X << '\n';
    std::cout << "Y (Before change): " << &Y << '\n';
    swapBYaddress(X,Y); std::cout << '\n'; 

    std::cout << "\n##########Pass By Value##########\n";
    std::cout << "A (Before change): " << A << '\n';
    std::cout << "B (Before change): " << B << '\n';
    std::cout << "A (Before change): " << &A << '\n';
    std::cout << "B (Before change): " << &B << '\n';
    swapBYvalue(A,B); std::cout << '\n';

    return 0;

}