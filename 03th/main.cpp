#include "person.h"
#include "dog.h"

using namespace A;
using namespace C;
int main()
{
/*	Person per;
	per.setName("zhangsan");
	per.setAge(19);
	per.printInfo();

	Dog dog;
	dog.setName("wangcai");
	dog.setAge(1);
	dog.printInfo();
	A::printVersion();
	C::printVersion();*/
	Person *per = new Person();
	per->setName("lisi");
	per->setAge(20);
	per->printInfo();
}

