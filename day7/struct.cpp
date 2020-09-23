#include <iostream>

// struct is a user-defined data type unlike int, float, bool, char etc.
// that are defined by the C++ language
// struct comprises of a combination of multiple built-in data types
// as well as other structs

// typedef is used to explicitly state that a given data type has another name 
// or an alias.
// For example, 'int' can be given an alias using 'typedef int myInt'.
// Here myInt can be interchangeably used as int.
// Likewise in the example below, 'physicalAtrributes' and 'physicalAtrributes_t'
// can be interchangeably used.  
typedef struct physicalAtrributes{
    short height;
    float weight;
}physicalAtrributes_t;

typedef struct student{
    long id;
    std::string name;
    short age;
    physicalAtrributes_t attrib; // another struct is part of struct student.
}student_t;

int main(){

    student s1; // declaration of struct.
    s1.id = 1234;
    s1.name = "narendra";
    s1.age = 18;
    s1.attrib.height = 150;
    s1.attrib.weight = 60;

    std::cout << "id: " << s1.id << "\n" << "name: " << s1.name \
    << "\n" << "age: " << s1.age << "\n" << "height: " \
    << s1.attrib.height << "\n" << "weight: " << s1.attrib.weight << std::endl; 

    return 0;
}