#include  <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	//get number of # as a command line arg
	printf("There are %d args\n", argc);


	int i;
		/* for (i = 0; i < argc; i++)
		{
			printf("argv[%d]: %s\n" , i, argv[i]);
		}*/


	//validate argument count
	if(argc != 2)
	{

		printf("Command syntax is %s <integer>\n", argv[0]);
	}


	//print that many pounds next to the number
	int num = atoi(argv[1]);
	printf("%d: ", num);

	for (i = 0; i < num; i++)
	{
		printf("#");
	}
	printf("\n");



	return 0;
}
