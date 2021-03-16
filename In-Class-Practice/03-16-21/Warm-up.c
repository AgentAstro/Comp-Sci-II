#include <stdio.h>

// fuction to determine area & perimeter


void calcAreaPeri(int l, int w, int *a, int *p)
{
	*a = l * w;
	*p = (l + w) * 2;

}




int main()
{
	//read in dimmensions
	int length, width, area, perimeter;

	printf("Enter the Length: ");
	scanf("%d", &length);
	printf("Enter the Width: ");
	scanf("%d", &width);

	//determine area & perimeter
	calcAreaPeri(length, width, &area, &perimeter);

	//print results
	printf("Area: %d\n", area);
	printf("Perimeter: %d\n", perimeter);

	return 0;
}
