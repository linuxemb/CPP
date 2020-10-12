#include <iostream>

template<typename T>
T Max(T x, T y)
{
		std::cout <<typeid(T).name() <<std::endl;
		return x>y ? x:y;
}

int main()
{
Max (static_cast<float> (3), 5.5f);
Max <double> (3, 6.2);
int (*pfn) (int, int ) = Max;
return 0;

}
