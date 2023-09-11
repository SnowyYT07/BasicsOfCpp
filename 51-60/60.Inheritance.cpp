#include <iostream>


class Animal
{
    public:
        bool alive = true;
    void eat(){std::cout << "This animal is eating\n";}
    void drink(){std::cout << "This animal is drinking\n";}
    void sleep(){std::cout << "This animal is sleeping\n";}
};
class Dog : public Animal{
    public:
        void bark(){std::cout << "The Dog goes Woof!\n";}
};
class Cat : public Animal{
    public:
        void meow(){std::cout << "The Dog goes Meow!\n";}
};
class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape
{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side; 
    }

};
class Sphere : public Shape
{
    public:
        double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }

    
};

int main()
{
    // inheritance = A class can recieve attributes and methods from another class
    //               chilldren classes inherit from parent class
    //               Helps to reuse similar code found within multiple classes

//  Example 1 
    Dog dog;
    Cat cat;

    std::cout << "*********Example 1*********\n";

    std::cout << "Is the dog alive (0 or 1): " << dog.alive << '\n';
    dog.eat();
    dog.bark();
    std::cout << "Is the cat alive (0 or 1): " << cat.alive << '\n';
    cat.drink();
    cat.sleep();

//  Example 2
    std::cout << "*********Example 2*********";

    Cube cube(10);
    Sphere sphere(6);
    std::cout << '\n';
    std::cout << "Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";
    std::cout << '\n';    
    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";
    
    return 0;
}