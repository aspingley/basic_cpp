#include <string>
#include <vector>

namespace intel{
    class Connectivity{
        public:
            bool connect(const std::string&); // developed by Intel
            virtual std::vector<std::string> discover(); // developed by HP
            virtual ~Connectivity();
    };
}
 