#include "intel.hpp"

namespace hp{
    class HPConnectivity: public intel::Connectivity{
        public:
        std::vector<std::string> discover();
    };
}