#include <iostream>

int main(){
    int a[] = {13,4,76,32,56,90,32};
    
    int arrSize = sizeof(a)/sizeof(a[0]);

    for (int i=0; i<arrSize; i++){
        std::cout << a[i] << std::endl;
    }

    for (int i : a){
        std::cout << i << std::endl;
    }      

    int i=-1;
    while(i++ < arrSize-1){
        std::cout << a[i] << std::endl;
    } 

    i=0;
    do{
        std::cout << a[i] << std::endl;
    }while(i++ < arrSize-1);
}