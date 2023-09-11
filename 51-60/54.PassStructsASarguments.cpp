#include <iostream>

struct car
{
    std::string carType;
    std::string color;
};


void printCar(car &car)
{
    std::cout << &car << '\n';
    std::cout << car.carType << '\n';
    std::cout << car.color << '\n';
}
void paintCar(car &car, std::string color)
{
    car.color = color;
}
void printCar2(car car)
{
    std::cout << &car << '\n';
    std::cout << car.carType << '\n';
    std::cout << car.color << '\n';
}
void paintCar2(car car, std::string color)
{
    car.color = color;
}


int main()
{

    car car1;

    car1.carType = "car1";
    car1.color = "blue";
    
    car car2;

    car2.carType = "car2";
    car2.color = "purple";

    std::cout << "\nWith the operator '&'\n";

    paintCar(car1, "silver");
    std::cout << &car1 << '\n';
    printCar(car1);

    std::cout << "\nWithout the operator '&'\n";

    paintCar2(car2, "silver");
    std::cout << &car2 << '\n';
    printCar2(car2);

    std::cout << "Different address of memory, and the color didnt change(just in function)";
    
    return 0;
}