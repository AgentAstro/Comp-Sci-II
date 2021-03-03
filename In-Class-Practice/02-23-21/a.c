#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROWS 4
#define COLS 5


//void printArray( int rows, int cols, int arr[rows][cols])

void printArray(int rows, int cols, int *arr)
{
        int r, c;
        srand(time(0));
			//ROWS
        for (r = 0; r < rows; r++)// rows
        {			//COLS
                for(c = 0; c < cols; c++)// cols
                {
                        //printf("%2d ", array[r][c]);
			printf("%2d", (arr + *(r*cols) + c));
                }
		printf("\n");

        }

}
int main()
{
	// declare 2d array
	int array[ROWS][COLS];

	//fill with random number in range
	int r, c;
	srand(time(0));

	for (r = 0; r < ROWS; r++)// rows
	{
		for(c = 0; c < COLS; c++)// cols
		{
			array[r][c] = rand() % 50;
		}

	}


	// pass to function for printing
	printArray(array);



	return 0;
}
