#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    map<string, unsigned short> directory; // empty map
    // map[key] = value;
    // adding key value pair into map
    directory["dipayan"] = 9876;
    directory["vedanti"] = 1987;
    directory["gaurang"] = 9576;

    unsigned short& v = directory["vedanti"];
    cout << v << endl;
    if(directory.end() != directory.find("aniket")){
        cout << directory["aniket"] << endl;
    }

    list<int> l1 = {2,4,6,8,0,5,7,8};
    l1.push_back(91);
    l1.push_front(56);
    for(auto& n: l1){
        cout << n << endl;
    }

    //list<int>::iterator iter;
    auto iter = std::find(l1.begin(), l1.end(), 0);
    if(l1.end() != iter){
        //cout << *iter << endl;
    }

    return 0;
}