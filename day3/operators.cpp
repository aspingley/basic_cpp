#include <iostream>

int main(){

    int a = 9 - 5;
    int b = a + 10;
    int c = a + b;
    int d = c * b;
    float e = d/a;

    std::cout << 9 - 7 << std::endl;
    std::cout << d/a << std::endl;

    d = d+1;
    d += 1; 
    d++;

    a = a-1;
    a -= 1; 
    a--;

    b = 10 % 2;
    c = 10 % 3;

    std::cout << 10 % 2 << std::endl;
    std::cout << 10 % 3 << std::endl;
    std::cout << 5 + 8 % 2 << std::endl;
    std::cout << 5 + 8 * 2 << std::endl;

    std::cout << (5 > 3) << std::endl;
    std::cout << (5 >= 3) << std::endl;
    
    std::cout << (5 == 3) << std::endl;

    return 0;
}