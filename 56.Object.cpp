#include<iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){std::cout << "this person is eating";}
        void drink(){std::cout << "this person is drinking";}
        void sleep(){std::cout << "this person is sleeping";}
};



int main()
{
    // object = A collection of attributes and methods
    //          They can have characteristics and could peform actions
    //          Can be used to mimic real world items (Ex. Phone, Book, Dog)
    //          Created from a class which acts as a "Blue-Print"

    Human human1;

    human1.name = "John";
    human1.occupation = "unemployed";
    human1.age = 32;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
}