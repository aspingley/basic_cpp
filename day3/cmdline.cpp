#include <iostream>

int main(){
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    //getline(std::cin, name);
    std::cout << "Your name is " << name << std::endl;
    std::cout << "Enter you favorite number: ";
    int myFavNum = -1;
    std::cin >> myFavNum;
    std::cout << "Your favorite number is: " << myFavNum << std::endl;
    return 0;
}