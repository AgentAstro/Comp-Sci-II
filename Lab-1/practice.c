#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArr(int r[], int size);

int main()
{
    //Fill an array with 10 random numbers from 0 - 15
    int arr[10] = {};
    srand(time(0));
    for( int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 16;
    }
    // print the array
    printArr(arr, 10);
    // print the positions of 4/5/9

    printf("Found 4, 5 or 9 at: ");
    for (int i = 0; i < 10; i++)
    {
    /*  if (arr[i] == 4 || arr[i] == 9 || arr[i] == 5)
            printf("%d ", i);*/
        switch (arr[i])
        {
            case 4: printf( "%d ", i); break;
        }
    }
    return 0; 
}

void printArr(int r[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d: %3d \n", i, r[i]);
    }
}
