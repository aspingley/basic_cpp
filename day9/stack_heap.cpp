#include <iostream>

int *globalPtr = nullptr;

int& funcReturnReference(){
    int i = 18;
    return i;
}

void funcGetAddressReference(int &t){
    int i = 67;
    t = i;
}

void funcGetAddressPtr(int *t){
    int i = 53;
    *t = i;
}

void funcGetAddressPtrGlobal(){
    int i = 89;
    *globalPtr = i;
}

struct testStruct{
    float a;
    short b;
};

testStruct& funcGetStructReference(){
    testStruct h;
    h.a = 10.8;
    h.b = 89;
    
    return h;
}

testStruct* funcGetPtrStruct(float k, short l){
    testStruct* h = new testStruct; // testStruct();
    h->a = k;
    h->b = l;
    return h;
}

int main(){
    int& j = funcReturnReference();
    std::cout << j << std::endl;
    
    int k = -1;
    funcGetAddressPtr(&k);
    std::cout << k << std::endl;
    
    funcGetAddressReference(k);
    std::cout << k << std::endl;
    
    funcGetAddressPtrGlobal();
    std::cout << *globalPtr << std::endl;
    
    testStruct& ts = funcGetStructReference();
    float& b =  ts.a;
    std::cout << b << std::endl;

    //testStruct j;
    //j.a = 10.9;
    //j.b = 7;

    //testStruct* ts = new testStruct; //testStruct() 
    //ts->a = 10.9;
    //ts->b = 8;

    testStruct* p = funcGetPtrStruct(10.9, 89);
    std::cout << p->a << "\t" << p->b << "\t" << p << std::endl;
    //delete p; // release memory
    //p = nullptr;
    testStruct* q = funcGetPtrStruct(5.6, 56);
    //std::cout << q->a << "\t" << q->b << "\t" << q << std::endl;
    if(nullptr != p){
        std::cout << p->a << "\t" << p->b << "\t" << p << std::endl;
    }

    //int arr1[] = {1,3};
    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30; 
    delete [] arr;

    testStruct* strArr = new testStruct[2]; // 12 bytes
    strArr[0] = *p;
    strArr[1] = *q; // dereference

    testStruct& m = strArr[0]; 
    testStruct& n = strArr[1]; 

    testStruct* m1 = &strArr[0]; 
    testStruct* n1 = &strArr[1]; 

    std::cout << m.a << "\t" << m.b << std::endl;
    std::cout << n.a << "\t" << n.b << std::endl;

    std::cout << m1->a << "\t" << m1->b << std::endl;
    std::cout << n1->a << "\t" << n1->b << std::endl;

    testStruct** strArrPtr = new testStruct*[2];
    strArrPtr[0] = p;
    strArrPtr[1] = q;

    std::cout << strArrPtr[0]->a << "\t" << strArrPtr[0]->b << std::endl;
    std::cout << strArrPtr[1]->a << "\t" << strArrPtr[1]->b << std::endl;
    
    delete p;
    delete q;

    return 0;
}