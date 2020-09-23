#include <iostream>

void update(int &r)
{
    r++;
}

int main()
{
    int a = 101;
    std::cout << &a << std::endl;     // this will print the address of the a in hexadecimal
    int *ptr_a = &a;                  // &a results into the address of variable 'a'.
    std::cout << ptr_a << std::endl;  // same output as line 10
    std::cout << *ptr_a << std::endl; // prints the value located at address pointed by ptr_a
    *ptr_a = 102;                     // modify value of variable a using pointers
    ++(*ptr_a);                       // increment the value of variable a using pointers
    update(a);                        // same increment operation using references
    std::cout << a << std::endl;

    int arr[10] = {1, 2, 56, 57, 8, 6, 9, 0, 4, 19};
    int *ptr_arr = arr; // int* ptr_arr1 = &arr[0];
    for (short i = 0; i < 10; i++)
    {
        // following 2 lines are two ways to print the same content
        std::cout << arr[i] << "\t" << &arr[i] << std::endl;
        std::cout << *ptr_arr << "\t" << ptr_arr++ << std::endl;
    }

    return 0;
}