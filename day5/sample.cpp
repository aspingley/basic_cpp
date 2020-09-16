#include "sample.hpp"
#include <iostream>

unsigned long add(const unsigned short& a, const unsigned short& b){
   unsigned long c = a + b;    
   return c;
}

long long add(long& a, long& b){
   std::cout << "long non-const add : ";
   long long c = a + b;    
   return c;
}

long long add(const long& a, const long& b){
   std::cout << "long const add : ";
   long long c = a + b;    
   return c;
}

short sub(unsigned short a, unsigned short b){
    short c = a - b;
    return c;
}

unsigned long mul(unsigned short a, unsigned short b){
    unsigned long c = a * b;
    return c;
}