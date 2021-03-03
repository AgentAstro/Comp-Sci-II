#include <stdio.h>
#include <string.h>

int main()
{

	//define a string
	//char words[] = "this is a long string that has some a's in it";

	char words[100] = {}
	printf("Enter a string: ");
	fgets(words, 100, stdin);


	//deterine the length of the string
	int len;
	len = strlen(words);
	//printf("***%s*** is %d characters long\n:, words, len);

	//get a character to search for 
	char search;
	printf("Enter a charater to search for: ");
	scanf( "%c", &search);

	//searching character
	int q, count=0;
	for ( q = 0; q < len; q++ ) 		// iterate over characters in string
	{
		//if(words[q] == 'a') 		//if the current char is an "a"
		if (words[q] == search) 	// for user input
		{
			count++; 		// increment the counter
		}
	}
	//print results
	printf("There are %d %c's in ***%s***\n", count, words);



	return 0;
}
