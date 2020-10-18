#include <iostream>

template<int size>
void Print() {
		char buffer[size];
		std::cout<<size<<std::endl;
}

/*
template <typename T>
T Sum (T *parr, int size) {
	T 	sum{};
		for (int i =0; i< size; ++i)
		{
		sum +=parr[i];
		}
   return sum;
}
*/
template <typename T, int size>
T Sum (T (&parr)[size]) {
    T sum{};
		for (int i =0; i< size; ++i)
		{
		sum +=parr[i];
		}
   return sum;
}
int main() {
	int arr[]{3,3,4,5};
//	auto it = std::begin
//	int sum = Sum(arr,4);
	int sum = Sum(arr);
		std::cout <<sum <<std::endl;
	return 0;
}
