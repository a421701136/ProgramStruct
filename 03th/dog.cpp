#include "dog.h"

namespace C{
void Dog::setName(char *name)
{
	this->name = name;
}

int Dog::setAge(int age)
{
	if(age<0 || age>30)
	{
		age = 0;
		return -1;
	}
	this->age = age;
	return 0;
}

void Dog::printInfo(void)
{
	printf("Dog name=%s, age=%d\n", name, age);
}

void printVersion(void)
{
	printf("Dog v1.0, Lee\n");
}
}
