#include <iostream>

template <typename T, typename U>

auto max1(T x, U y){
    return (x > y) ? x : y;
}
// We used two templates T & U , for max1(1, 2.2) hold two datatypes

int main()
{
    // function template = describes what a function looks like
    //                     Can be used to generated as many overloaded functions
    //                     as needed, each using different data types
    
    std::cout << max1(1, 2.2) << '\n';

    return 0;
}