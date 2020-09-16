#include <iostream> // this is part of c++
#include "sample.hpp" // custom implementation

// return_type function_name(param1, param2, ...){}

int main(){

    unsigned short a = 11; unsigned short b = 12;
    std::cout << add(a, b) << std::endl;
    std::cout << sub(11, 11) << std::endl;
    std::cout << mul(11, 11) << std::endl;

    {
        long n = 41341543; long m = 2325235;
        std::cout << add(n,m) << std::endl;
    }

    {
        const long n = 41341543; const long m = 2325235;
        std::cout << add(n,m) << std::endl;
    }
    
    return 0;
}