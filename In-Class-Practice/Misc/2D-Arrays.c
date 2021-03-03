#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cheesecake(int arr[][4], int numrows, int numcols)
{
        int rows, cols;
        for(rows = 0; rows < 2; rows++)
        {
                for( cols = 0; cols < 4;cols++)
                {
                        printf("%2d ", arr[rows][cols]);
                }
	        printf("\n");

        }
}


int main()
{

	//two arrays (one initialized from slide)
	srand(time(0));
	int arrOne[2][4] = {{5,1,3,8}, {56,7,78,2}};
	int arrTwo[2][4];
	int arrThr[2][4];
	//fill arrTwo with random values
	int rows, cols;
	for (rows = 0; rows < 2; rows++)
	{
		for( cols = 0; cols < 4; cols++)
		{
			arrTwo[rows][cols] = rand() % 10 + 1;
		}
	}

	//print the arrays

	cheesecake(arrOne, 2, 4);
	cheesecake(arrTwo, 2, 4);
	return 0;
}
