#include <stdio.h>
#include <string.h>

// define structure here

struct rectangle
{
	int width, height, area, perimeter;


};
// define functions to calculate perimeter and area

/* void calcDim(int height, int width, int *area, int *perim)
{
	*area = height * width;
	*perim = (height + width) * 2;
}
*/
// you may use pass by value or reference


void Calc(struct rectangle * ptr)
{
	(*ptr).area = (*ptr).width * (*ptr).height;

	(*ptr).perimeter = ((*ptr).width + (*ptr).height) * 2;

}


void printRect(struct rectangle info)
{
  printf("\nRectangle Info\n");
  printf("--------------\n");
  printf("  Width: %d\n", info.width);
  printf(" Height: %d\n", info.height);
  printf("   Area: %d\n", info.area);
  printf("  Perim: %d\n\n", info.perimeter);
}

int main()
{
  struct rectangle mr;
  int done = 0;
  char option;
  while (done != 1)
  {
    printf("Would you like to enter a new rectangle? ");
    scanf(" %c", &option);
    if (option != 'y')
      done = 1;
    else
    {
      // read dimmensions into structure
	printf("Enter the Width: ");
	scanf("%d", &mr.width);

	printf("Enter the Height: ");
	scanf("%d", &mr.height);
      // call one or more functions to calculate area & perimeter
//	calcDim(mr.height, mr.width, &mr.area, &mr.perimeter);
	Calc(&mr);



    // call function to print all details
      printRect(mr);
    }
  }
}
