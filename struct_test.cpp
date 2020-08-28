#include <iostream>

struct classLike{
		classLike(){
			std::cout << __func__ << std::endl;
		}
		~classLike(){
			std::cout << __func__ << std::endl;
		}
};

int main(){
		classLike l;
		return 0;
}