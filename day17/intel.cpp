#include "intel.hpp"
#include <iostream>

namespace intel{
    bool Connectivity::connect(const std::string& user){
        std::cout << "connect implemented by Intel. \
        User = " << user << std::endl;
        return true;
    }
    
    std::vector<std::string> Connectivity::discover(){
        std::cout << "implemented by whoever inherits" << std::endl;
        std::vector<std::string> emptyVector;
        return emptyVector;
    }

    Connectivity::~Connectivity(){}
}