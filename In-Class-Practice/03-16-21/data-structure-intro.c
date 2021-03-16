#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empInfo
{
	char name[100];
	int age;
	float salary;

};


void printEmpInfo(struct empInfo emp)
{

	printf("%25s - %d - $%.2f\n", emp.name, emp.age, emp.salary);
}

float empIncreaseSalary(struct empInfo x)
{
	return x.salary * 1.05;
}

struct empInfo strIncreaseSalary(struct empInfo x)
{
	x.salary *= 1.05;

	return x;
}


void ptrIncreaseSalary(struct empInfo *ptr)
{
	//increase salary with pointers

	//(*ptr).salary *= 1.05;

	ptr->salary *= 1.05;

}



int main()
{
	//create a structure to represtent an employee called Alice
	struct empInfo alice;
	alice.age = 27;
	alice.salary =  100001.54;
	strncpy(alice.name, "Alice Smith", sizeof alice.name);
	printf("%s\n", alice.name);

	printEmpInfo(alice);

	// increase Alice's salary
	//alice.salary *= 1.05;

	//print Alice's info via a fuction
	//alice.salary = empIncreaseSalary(alice);
	//alice = strIncreaseSalary(alice);

	// write a runction to increase the emplyees salary


	struct empInfo bob = {"Bob Jones", 29, 75876.23};
	ptrIncreaseSalary(&bob);
	printEmpInfo(bob);

	return 0;
}
