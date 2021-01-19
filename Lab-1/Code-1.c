// CSC 250
// Prefered Name: Harvard Limon
// Real Name: Yael Santoyo-Limon

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int findMin(int arr[], int size);
int findMax(int arr[], int size);
int findSum(int arr[], int size);
int array_1[100] = {};
// Add additional function protoypes here
int seed, count, start, max, min, sum, avg, ind-1,ind-2;
int main()
{
printf("Enter a Seed Value: ");
scanf("%i", &seed);
printf("Enter amount of numbers in the array(Int): ");
scanf("%i", &start);

if (seed >=  0 )
{
	srand(seed);
	for (count = 0; count <= start; count++)
	{
		array_1[count] = (rand() % 1001);

	};
	printf("Max: %3d   Ind: %3d", max, ind-1
               "Min: %3d   Ind: %3d", min, ind-2
               "Avg: %3d   sum: %3d", avg, sum)
};


	return 0;
}

int findMin(int arr[], int size)
{
    // Add code below and return the min

}

int findMax(int arr[], int size)
{
    // Add code below and return the max

}

int findSum(int arr[], int size)
{
    // Add code below and return the sum

}

// Add addition functions here
