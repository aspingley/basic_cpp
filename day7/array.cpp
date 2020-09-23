#include <iostream>

void printarray(int arr[], unsigned short numElems)
{
    //std::cout << sizeof(arr) << std::endl;
    // the output for the statement about will be either 
    // 8 or 4 bytes depending on the OS architecture.
    // thus, it is important to pass the number of elements
    // alongwith the starting address of the array.
    for (short i = 0; i < numElems; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

void printarray(float arr[], unsigned short numElems)
{
    //std::cout << sizeof(arr) << std::endl;
    for (short i = 0; i < numElems; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

void printarray(char arr[], unsigned short numElems)
{
    //std::cout << sizeof(arr) << std::endl;
    for (short i = 0; i < numElems; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{

    int arrInt[6] = {11, 12, 13, 325, 234, 43};
    float arrFloat[4] = {1.0, 2, 3.1, 4.5};
    char arrChar[6] = {'a', 'n', 'i', 'k', 'e', 't'};

    // inside its local scope a function can determine
    // the actual size of array in bytes.
    // however, when an array is passed to a function, 
    // the starting address of that array is passed instead
    // of passing the array element-by-element.
    // the address of any data type will be 64 bits or 8 bytes 
    // on a 64-bit OS architecture (likewise for 32 bit OS architecture)

    printarray(arrInt, (sizeof(arrInt) / sizeof(int)));
    // sizeof(arrInt) = 6 elements * 4 bytes = 24 bytes total
    // sizeof(int) = 4 bytes
    std::cout << "\n";
    printarray(arrFloat, (sizeof(arrFloat) / sizeof(float)));
    std::cout << "\n";
    printarray(arrChar, (sizeof(arrChar) / sizeof(char)));

    return 0;
}