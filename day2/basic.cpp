#include <iostream>
int i = 111;

// this is basic structure of a cpp program
int main(){
	std::cout << "This is first cpp program" << std::endl;
	
	int i = 0;
	i = 9;
	std::cout << "value of i in main scope = " << i << std::endl;
	
	{
		i = 10;
		std::cout << "value of i in first scope = " << i << std::endl;
	}

	{
		int i = 33;
		std::cout << "value of i in second scope = " << i << std::endl;
	}

	std::cout << "value of i in main scope = " << i << std::endl;
	std::cout << "value of i in global scope = " << ::i << std::endl;
	
	return 0;
}