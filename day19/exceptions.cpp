#include <iostream>
#define ERROR_CODE 100 // alias 

class myException{
    public:
        std::string getErrorMessage(){
            return "myException sample exception message";
        }

        int getErrorCode(){
            return -9;
        }
};

class something{
    private:
        std::string _msg;
    public:
     something(std::string msg){
         _msg = msg;
         std::cout << "constructed something. msg = " << _msg << std::endl;
     }

     ~something(){
         std::cout << __func__ << "\tmsg = " << _msg <<  std::endl;
     }
};

class demo{
    public:
        int i;
};

void func(demo* ptrDemo){
    something *s = new something("heap"); // heap
    something t("stack"); // call stack. automatically the stack will unwind.
    if(nullptr != ptrDemo){ // exceptional behavior
        //std::cout << ptrDemo->i << std::endl;
        if(0 != ptrDemo->i % 5){
           // throw ERROR_CODE; // throw 100
           myException e;
           throw(e);
           // nothing will get executed past the throw statement above
           std::cout << "exception thrown for multiple of 5" << std::endl; 
        }
    }
    else{
        std::string err = "object of demo class is nullptr";
        throw err;
    }
    // 's' gets destroyed here 
}

int main(){
    demo *d = new demo();
    d->i = 99;
    //delete d;
    //d = nullptr;

    try{
        func(d);
        std::cout << "this line will be executed" << std::endl;
        func(nullptr);
    }
    catch(int& err){
        std::cout << "Exception. Error code = " << err << std::endl;
    }
    catch(std::string& err){
        std::cout << err << std::endl;
     }
    catch(myException& err){
        std::cout << err.getErrorCode() << "\t" << err.getErrorMessage() << std::endl;
    }
    catch(...){
        std::cout << "Exception on unknown type handled" << std::endl;
    }

    return 0;
}