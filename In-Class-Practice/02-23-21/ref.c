#include <stdio.h>
#include <stdlib.h>




void printVal(int v)
{
	printf("v is %d\n", v);
	v += 7;
	printf("v is now %d\n", v);
}


void modify(int *p)
{
	printf("p represents address: %p\n", p);	// print pointer address
	printf("p value is: %d\n", *p);		//print value
	*p = *p + 4;
}


int main()
{

	int m = 8;
	printf("m is %d\n", m);
	printf("m is %d\n", m);
	modify(&m); // & is the  address operator: gets the location of a variable in memory
	printVal(m);
	printf("m is %d\n", m);

	return 0;
}
