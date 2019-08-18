#include <iostream>
#include <memory>

class test {
public:	void print()
		 {
		std::cout << "test::print" << std::endl;
	}
};

int main()
{
/*	std::auto_ptr <test> aptr(new test);
	aptr->print();
	 std::auto_ptr <test> aptr2(aptr);
	aptr->print();
aptr2->print();
	std::cout<<aptr.get()<<std::endl;        
	std::cout<<aptr2.get()<<std::endl;   
	return 0;a
*/
	std::shared_ptr <test> aptr(new test);
	aptr->print();
	 std::shared_ptr <test> aptr2(aptr);
	aptr->print();
	aptr2->print();
	std::cout<<aptr.get()<<std::endl;        
	std::cout<<aptr2.get()<<std::endl;   
	aptr.reset();
	std::cout<<	aptr.use_count()<< std::endl;
	std::cout<<	aptr2.use_count()<< std::endl;
	return 0;

}
