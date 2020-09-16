// this function adds 2 numbers
unsigned long add(const unsigned short&, const unsigned short&); //declaration

// overloading of functions
long long add(long&, long&); //declaration

//overloading of function using const-ness
long long add(const long&, const long&); 

// this function subtracts two numbers
short sub(unsigned short, unsigned short); 

// cannot allow overloading based on return-type alone
//long sub(unsigned short, unsigned short); 

// this function multiplies two numbers
unsigned long mul(unsigned short, unsigned short);
