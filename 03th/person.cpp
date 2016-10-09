#include "person.h"

namespace A{
void Person::setName(char *name)
{
	this->name = name;
}

int Person::setAge(int age)
{
	if(age<0 || age>180)
	{
		age = 0;
		return -1;
	}
	this->age = age;
	return 0;
}

void Person::printInfo(void)
{
	printf("name=%s, age=%d\n", name, age);
}

void printVersion(void)
{
	printf("person v1.0, Lee\n");
}
}
