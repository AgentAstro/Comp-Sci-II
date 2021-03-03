#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


/*
int main()
{
	int stack[10], i;
	srand(time(0));
	for ( i = 0; i <= 10 ; i++)
	{
		stack[i] = rand() % 50;

	}

	for ( i = 0; i <= 10; i++)
	{
		printf("%d \n", stack[i]);
	}



	return 0;
}
*/


struct food
{
	char name[20];
	int  calories;
};




int main()
{
	struct food apple;

	scanf("%s", apple.name);
	scanf("%d", &apple.calories);

	//scanf("%s", food.name);
	//printf("%s", food.name);

	int dailyCal = 3000;
 	dailyCal = dailyCal - apple.calories;

	printf("Calories left in the day: %d\n", dailyCal);




	return 0;
}
