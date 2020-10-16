#include <iostream>

struct classLike{
		int someVar;
		classLike(){
			std::cout << __func__ << std::endl;
		}
		~classLike(){
			std::cout << __func__ << std::endl;
		}
};

class demo{
	int someVar;
	public:
		demo(){}
		~demo(){}
};

int main(){
		classLike l;
		l.someVar = 0;
		demo d;
		//d.someVar = 0;
		return 0;
}