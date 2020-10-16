#include <string>
#include <vector>

namespace intel{
    class Connectivity{
        public:
            bool connect(const std::string&); // developed by Intel
            // to be developed by client of Connectivity library
            virtual std::vector<std::string> discover() = 0; // makes the class abstract
            virtual ~Connectivity();
    };
}
 