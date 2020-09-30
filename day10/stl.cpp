#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <array>

using namespace std;

namespace my{
    template <typename T>
    void swap(T& a, T& b){ //a = 1, b = 2
        //cout << a << "\t" << b << endl;
        T c = a;
        a = b;
        b = c;
        //cout << a << "\t" << b << endl;
        return;
    }
}

int main(){
   
    int a1 = 10; int b1 = 20;
    cout << a1 << "\t" << b1 << endl;
    my::swap<int>(a1, b1);
    cout << a1 << "\t" << b1 << endl;

    float a2 = 9.4; float b2 = 8.2;
    cout << a2 << "\t" << b2 << endl;
    my::swap<float>(a2, b2);
    cout << a2 << "\t" << b2 << endl;

    std::vector<int> intV = {2,5,78,9,24,67,99}; // not compile older standards
    std::vector<double> intD = {2.1,5.6,7.8,9.0,2.4,6.7,9.9};

    //cout << intV.size() << endl;
    intV.push_back(67); intV.push_back(17); 
    //cout << intV.size() << endl;
    intD.push_back(7.1);
    intV.pop_back();
    //cout << intV.size() << endl;

    std::sort(intV.begin(), intV.end());
    for(auto& n: intV){
        //cout << n << endl;
    }

    for(auto& n: intD){
        //cout << n << endl;
    }

    std::array<int, 4> arr1{ {11, 2, 103, 67} };
    std::sort(arr1.begin(), arr1.end());
    for(auto& n: arr1){
        //cout << n << endl;
    }

    pair<int, char> p1;
    p1.first = 89;
    p1.second = 'a';

    //cout << p1.first << "\t" << p1.second << endl;

    vector<int>::iterator iter;
    for(iter = intV.begin(); iter < intV.end(); iter++){
        cout << *iter << endl;
    }    

    vector<double>::iterator iterD;
    for(iterD = intD.begin(); iterD < intD.end(); iterD++){
        cout << *iterD << endl;
    }  

   return 0;

}