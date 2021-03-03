#include <string.h>
#include <stdio.h>

char *getLastName(char fn[])
{
	// "find" the last name and return the location

	int i, len = strlen(fn);
	for ( i = 0; i < len; i++)
	{
	//	printf("%p | %p | %c | %c\n", (fn + i), &fn[i], *(fn + i), fn[i]); // & is the address operator
		if (fn[i] == ' ')
		{
			fn[i] = '\0';
			return &fn[i+1]; //return pointer to just last name (address of fist char of last name


		}
	}

}

int main()
{
	// prompt and read in name
	char name[100];
	printf("Enter your full name: ");
	fgets(name, 100, stdin);

	//discard newline
	char *nl = strchr(name, '\n');
	if ( nl != NULL)
	{
		*nl = '\0';

	}

	// get first name & last name
	//printf("%p is the address of name in main\n", name);
	char *last_name = getLastName(name);
	printf("First Name: %s \n", name);
	printf("Last Name: %s \n", last_name);
	// print names on seperate lines












	return 0;
}
