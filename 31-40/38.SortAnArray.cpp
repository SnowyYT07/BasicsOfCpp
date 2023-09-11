#include <iostream>

void Sort(int array[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int o = 0; o < size - i - 1; o++){
            if(array[o] > array[o + 1]){
                temp = array[o]; 
                array[o] = array[o + 1];
                array[o + 1] = temp; 
            }
        }
    }

}




int main()
{
    int array[] = {2, 1, 8, 4, 6, 3, 5, 7, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);

    Sort(array,size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}