#include <iostream>

int main(){
    unsigned short myNum = 0;
    std::cout << "Enter number between 1 and 5: ";
    std::cin >> myNum;

    switch(myNum){
        case 1:
            std::cout << "ONE" << std::endl;
            break;
        case 2:
            std::cout << "TWO" << std::endl;
            break;
        case 3:
            std::cout << "THREE" << std::endl;
            break;
        case 4:
            std::cout << "FOUR" << std::endl;
            break;
        case 5:
            std::cout << "FIVE" << std::endl;
            break;
        default:
            std::cout << "Outside range" << std::endl;
            break;
    }

    return 0;
}