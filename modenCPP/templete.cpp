#include <iostream>
void Print() {
		std::cout <<std::endl;

}

template <typename T, typename... Param>
void Print(T a, Param... arg)
{     
//		std::cout<<sizeof...(arg) <<std::endl;
	//	std::cout<<sizeof...(Param) <<std::endl;
		std::cout <<a; //<<",";
		if(sizeof...(arg) !=0)
				std::cout<<",";
		Print(arg...);
}

int main() {
		Print(1,2.4,3,"4");
		return 0;
}

