#include "recursion.hpp"
#include <iostream>

// 4567
unsigned long sumOfDigits(unsigned long num){
   if (0 == num) {return 0;}
   return (num % 10 + sumOfDigits(num/10));
   // step1: num = 4567, modulo = 7 + 15
   // step2: num = 456, modulo = 6 + 9
   // step3: num = 45, modulo = 5 + 4
   // step4: num = 4, modulo = 4 + 0
   // step5: return 0
}

// 6
unsigned long long factorial(unsigned short num){
   if(1 == num) {return 1;}
   return num * factorial(num -1);
   // step1: num = 6 ... 6 * f(6 - 1)
   // step2: num = 5 ... 5 * f(5 - 1)
   // stepn: num = 1, return 1; 
}