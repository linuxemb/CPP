#include <iostream>
#include "Integer.h"
#include <string>



class Employee {
		std::string m_name;
		Integer m_id;

public:
		Employee(const std::string &name, const Integer &id):
				m_name {name},
				m_id {id} { }

		Employee(const std::string &&name, const Integer &&id):
				m_name {name},
				m_id {id} { 
						std::cout <<"employee(std::string &&name, Interger &&id)" <<std::endl;
				}


};


int main() {
	
		Employee emp { "umar", 100};
		return 0;
}
// output 
