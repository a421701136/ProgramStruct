#include <stdio.h>

class Person{
private:
	char *name;
	int age;
public:
	void setName(char *name);
	int setAge(int age);	
	void printInfo(void);
};
