#include <iostream>

class demo{
        int value;
        static int retVal;
    public:
        demo(){
            value = 101;
        }
        
        int getValue(){
            return 99;
        }

        static int getValueStatic(){
            return retVal;
        }
};

int demo::retVal = 100;

int main(){
    demo d;
    std::cout << d.getValue() << "\t" << d.getValueStatic() << "\t" << \
    demo::getValueStatic() << std::endl;
    return 0;
}