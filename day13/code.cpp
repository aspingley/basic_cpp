#include <iostream>

//struct myStruct{
//    int f;
//    double g;
//    short t;
//};

int func(double f); // free function

class Sample{
    private:
        int _h; // member variables
        double _n; // member variables
        int func2(char){return 0;} // method
        int func3(char){return 0;} // method
    
    public:
        double p; // is this global? NO.
        Sample(){ // default constructor
            _h = 9;
            _n = 4.5;
            std::cout << "default constructor " << __func__ << std::endl;
        }

        Sample(const int& k, const double& l){ 
            // overloaded constuctor 
            _h = k;
            _n = l;
            std::cout << "overloaded constructor " << __func__ << std::endl;
        }

        Sample(const Sample& s){
            _h = s._h;
            _n = s._n;
            std::cout << "copy constructor " << __func__ << std::endl;
        }

        void operator = (const Sample& d){
            std::cout << "assignment operator " << __func__ << std::endl;
        }

        int getValueH(){ // getter function
            return _h;
        }

        double getValueN(){
            return _n;
        }

        void setValueH(int i){ // setter function
            _h = i;
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
    Sample r; // stack
    
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

    Sample overloadedSample = Sample(90, 6.5); 
    std::cout << overloadedSample.getValueH() \
    << "\t" << overloadedSample.getValueN() << std::endl;

    Sample d; // default constructor
    Sample s2 = overloadedSample; // copy constructor
    std::cout << s2.getValueH() \
    << "\t" << s2.getValueN() << std::endl;
    Sample& s3 = overloadedSample; // no constructor
    d = overloadedSample; // assignment operator

    Sample *ptrS2 = &overloadedSample; // no constructor
}