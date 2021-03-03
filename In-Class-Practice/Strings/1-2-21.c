#include <stdio.h>
#include <string.h>

int main()
{
	// Define a string to analyze
	//  char words[] = "I am a sexy best";
	//  printf("%s\n", words);
	char words[100] = {};
	printf("Enter a string: ");
	fgets(words, 100, stdin);

	// get a character to count
	char mychar;
	printf("Enter a character: ");
	scanf(" %c", &mychar);

	//  Determine the length of the string
	int len = strlen(words);
	printf("The length of the string is: %d\n", len);

	// Review the string and count the code
	int iter, count;
	count = 0;
	for (iter = 0; iter < len; iter++)
	{
		if (words[iter] == mychar)
			count++;
	}
	// print output
	printf("In total, there are %d '%c' in ***%s***\n", count,mychar, words);

	return 0;
}
