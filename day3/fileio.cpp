#include <iostream>
#include <fstream>

int main(){
    std::ofstream os;
    os.open("example.txt");
    //os.open("example.txt", std::ios::app);
    if(os.is_open()){
        os << "hi hello welcome\n";
        os.close(); 
    }

    std::ifstream is;
    is.open("example.txt");
    if(is.is_open()){
        std::string line;
        getline(is, line);
        std::cout << line << std::endl;
    }
}