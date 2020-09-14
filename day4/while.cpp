#include <iostream>

int main(){
    int n = 10;
    // while (expression) statement
    while(n > 0){
        std::cout << "n = " << n << std::endl;
        n--;
    }

    // do statement while (expression)
    do{
        std::cout << "dw n = " << n << std::endl;
    }while(n > 0);

    return 0;
}