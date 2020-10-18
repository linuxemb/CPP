#include <iostream>
#include <type_traits>

template<typename T>

T Divide(T a, T b) {
       static_assert (std::is_floating_point<T>::value, "only floaing pointt type supported");
		if(std::is_floating_point<T>::value == false ){
						std::cout<<"Use floating point types only \n";
						return 0;
						}
        return  a/b;
		}




int main() {

		static_assert(sizeof(void*)==8,"not a 32 bit mode");
		
		//above staic_assert better than this as it is done at compile time 
		//if(sizeof(void*) !=4)
		//		{		std::cout<<"Not a 32 bit mode\n"; 				}
	
		std::cout <<std::boolalpha << "IS interger?" <<std::is_integral<int>::value <<std::endl;
		std::cout << Divide(5,2) <<std::endl;
		
		return 0;
}
// output 
