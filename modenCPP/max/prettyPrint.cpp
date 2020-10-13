#include <iostream>
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
/*
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

*/
int main()
{
		int data = 5;
		float f=8.43f;
		PrettyPrint<int > p1(&data);
		p1.Print();
		PrettyPrint<float> p2(&f);
		p2.Print();
		char *p { "hello world" };
			//if without explicate specialization, need use p3(&p) when use char* as template parameter then the type of T is T* , 	
//		PrettyPrint <char*> p3(p);  // ERROR "cant covert fron char* to char**
		PrettyPrint <char*> p3(&p);
		p3.Print();
	   char **pData = p3.GetData();
		return 0;

}
