#include <iostream>
#include <unistd.h>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base::~Base(){}

Base *generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;

	if (r == 0) return (new A());
	else if (r == 1) return (new B());
	else return (new C());
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast e){}
	try
	{
		tmp = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast e){}
	try
	{
		tmp = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch (std::bad_cast e){}
}

int main(void)
{
	Base *ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();

		std::cout << "Identify by:"  << std::endl;
		std::cout << "Pointer: ";
		identify_from_pointer(ptr);
		std::cout << "Reference: ";
		identify_from_reference(*ptr);
		delete ptr;
		system("sleep 1");
	}
	return 0;
}
