#include <iostream>

int main()
{
    int array[][3] = {{1, 2, 3},
                     {4, 5, 6}, // imagine this like a table 
                     {7, 8, 9}};
/*
    std::cout << array[0][0]; // will print 1 (we print the data in row 0 column 0)
    std::cout << array[0][1]; // will print 2 (we print the data in row 0 column 1)
    ....
*/

    int rows = sizeof(array) / sizeof(array[0]);
    int columns = sizeof(array[0]) / sizeof(array[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int o = 0; o < columns; o++)
        {
            std::cout << array[i][o] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}