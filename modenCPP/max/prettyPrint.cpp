#include <iostream>
#include <vector>

// template class
		
template<typename T>
class  PrettyPrint 
{
		T *m_pData; // decoration here is pointer to pointer
public:
		PrettyPrint (T *data) :m_pData(data) { // becames T**  so augment passed should be pointer to pointer
		}
		void Print() {
		    std::cout << "{"<< 
					*m_pData <<"}" <<std::endl;
		}

		T * GetData() {
				return m_pData;
		}

};

// Explicite specialization for string types:q

template<>

class  PrettyPrint <char*>
{
		char *m_pData;
public:
		PrettyPrint (char *data) :m_pData(data) { // becames T**  so augment passed should be pointer to pointer
		}
		void Print() {
		    std::cout << "{"<< 
					m_pData <<"}" <<std::endl;
		}

		char * GetData() {
				return m_pData;
		}

};


template<>

class  PrettyPrint <std::vector<int>>
{
		std::vector<int> *m_pData;
public:
		PrettyPrint (std::vector<int> *data) : m_pData(data)
		 {  }
		void Print() {
		    std::cout << "{" ;
			for (const auto &x : *m_pData) {
					std::cout << x;
			}
			std::cout  << "}" << std::endl;
		}

		std::vector<int> * GetData() {
				return m_pData;
		}

};


int main()
{
		std::vector<int> v{1,2,3,4,5};
		PrettyPrint<std::vector<int>> pv (&v);
		pv.Print();
		return 0;

}


//==============output
//./a.out 
//{5}
//{8.43}
//{hello world}

