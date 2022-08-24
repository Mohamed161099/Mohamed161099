#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
 
	FILE *fp;  
	FILE *fp1;  
	FILE *in1;
	FILE *in2;
	char fName[20],cont[30];
	char chr,word1[30], word2[30];
	
	printf("\nEnter file name with path to open :");
	scanf("%s",fName);

	fp=fopen(fName,"r");
	fp1=fopen(fName,"r");
	if(fp==NULL)
	{
		printf("File does not exists!!!");
		exit(0);
	}

	printf("Contents of file is :\n");
	int cnt=0;
	int emptyline=0;
	for(char prt=fgetc(fp1);prt != EOF ; prt=fgetc(fp1))
	{
		printf ("%c", prt);

	}

	while((chr  = fgetc(fp)) != EOF )
	{
		if(chr == '\n')
		{
			cnt++;
			if ((chr = fgetc(fp))  ==  '\n')
			{
				fseek(fp, -1, 1);
				emptyline++;
			}
		}
	}
	printf("\n Total No of Lines present in given file: %d:",cnt);
	printf("\n Total No of Blank Lines: %d\n", emptyline);
	in1 = fopen(fName, "r");
	in2 = fopen(fName, "r");


	while (fscanf(in1, "%29s", word1) == 1) {

		int dupcount = 0;
		while (fscanf(in2, "%29s", word2) == 1) {
			if (strcmp(word1, word2) == 0) dupcount++;
		}
		if (dupcount > 1) 
		{
			if(strcmp(cont,word1) != 0)
			{
				printf("%s\t   %d\n", word1, dupcount);
			}
				strcpy(cont,word1);
		}
			rewind(in2);

	}

    fclose(fp1);
    fclose(fp);
    fclose(in1);
    fclose(in2);

	return 0;
}
