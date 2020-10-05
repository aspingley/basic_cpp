#include <iostream>

//struct myStruct{
//    int f;
//    double g;
//    short t;
//};

int func(double f); // free function

class Sample{
    private:
        int h; // member variables
        double n; // member variables
        int func2(char){return 0;} // method
        int func3(char){return 0;} // method
    
    public:
        double p; // is this global? NO.
        Sample(){
            h = 9;
            n = 4.5;
            std::cout << __func__ << std::endl;
        }

        int getValueH(){ // getter function
            return h;
        }

        double getValueN(){
            return n;
        }

        void setValueH(int i){ // setter function
            h = i;
        }

        ~Sample(){
            std::cout << __func__ << std::endl;
        }
};

int main(){

    Sample s; // instantiation of a class = object // int g
    std::cout << s.getValueH() << "\t" << s.getValueN() << std::endl;
    s.setValueH(67);
    std::cout << s.getValueH() << "\t" << s.getValueN() << std::endl;
    //Sample r; // stack
    
    Sample *t = new Sample(); // heap
    std::cout << t->getValueH() << "\t" << t->getValueN() << std::endl;
    t->setValueH(12);
    std::cout << t->getValueH() << "\t" << t->getValueN() << std::endl;

    Sample r; // int m
    std::cout << r.getValueH() << "\t" << r.getValueN() << std::endl;

    r.p; // local access of p.
    s.p;
    t->p;

    delete t; // destroy to object
}