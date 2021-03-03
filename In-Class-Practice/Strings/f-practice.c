#include <stdio.h>
#include <string.h>

int main()
{
	//open a file
	FILE *ifp = fopen("f-practice.txt", "r"); // open .txt in the local directory for reading

	if (ifp != NULL)
	{
		printf("The file opened successfully! \n");
	}
	else
	{
		printf("The file failed to open \n");
		return 1;
	}

	FILE *output = fopen("out.txt","w");
	if (output == NULL)
	{
		return 2;
	}
	// count a's in the file

	int count=0, i, len;
	char line[100];
	//while (fscanf(ifp, "%99s", line) != EOF)
	while (fgets(line, 100, ifp) != NULL)
	{
		len = strlen(line);
		for (i = 0; i < len; i++)
		{
			if (line[i] == 'a')
			{
				count++;
			}
		}
		fprintf(output, "Total a count: %3d | %s \n", count, line);
	}
	// print the result
	printf("There are %d a's in the file\n", count);

	// close the file 
	fclose(ifp);
	fclose(output);
	return 0;
}
