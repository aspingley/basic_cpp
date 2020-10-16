#include <iostream>
#include <vector>
#include "hewlett.hpp"

namespace hp{
    std::vector<std::string> HPConnectivity::discover(){
        std::vector<std::string> users = \
        {"aniket", "gaurang", "jayalakshmi", "vedanti"};
        return users;
    }
}

int main(){
    hp::HPConnectivity *_hpc = new hp::HPConnectivity();
    std::vector<std::string> users = _hpc->discover();
    for (auto& u: users){
        std::cout << u << std::endl;
        _hpc->connect(u);
    }

    delete _hpc;
    _hpc = nullptr;

    std::cout << "\n\n";

    intel::Connectivity *_ipc = new hp::HPConnectivity();
    std::vector<std::string> users1 = _ipc->discover();
    for (auto& u: users1){
        std::cout << u << std::endl;
        _ipc->connect(u);
    }

    delete _ipc;
    _ipc = nullptr;

    intel::Connectivity *_ipc0 = new hp::HPConnectivity();

    return 0;
}