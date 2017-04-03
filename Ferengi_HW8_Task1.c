/*
 * =====================================================================================
 *
 *       Filename:  Ferengi_HW8_Task1.c
 *       	Usage:  ./Ferengi_HW8_Task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2017 11:55:34 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tysen Bair (), tysenbair@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */
void Usage(void);
void Help(void);
char *StringIn(char *first, char *last);

/* Main Program */
int main(int argc, char *argv[])
{
	char *begin = 0;
	do
	{ 
	//	if(argv[0] string itoa(int) == '-')
	//	{
	//		Help();
	//		exit(1);
	//	}		
		if(argc != 3)
		{	
			Usage();
			exit(1);
		}
		 
		begin = StringIn(argv[1], argv[2]);

		if(begin != NULL)
			printf("\n %s is inside %s. \n Returned string %s\n", argv[2], argv[1], begin);
		
			else printf("\n %s is not found in %s. \n", argv[2], argv[1] );
			break;
	}
	while(1);
	{
	printf("\n");
	}
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("\n");
	printf("Missing required parameters\n");
	printf("Usage:  ./Ferengi_HW8_Task1 <str1> <str2>\n");
	printf("The program will be checking if str2 is part of str1\n");
	printf("\n");
	return;
}

void Help(void)
{
	printf("\n");
	printf("Help Information\n");
	printf("Usage:  ./Ferengi_HW8_Task1 <str1> <str2>\n");
	printf("The program will be checking if str2 is part of str1\n");
	printf("\n");
	return;
}

char *StringIn(char *first, char *last)
{
	char* i = (char *) first;
	int ii = strlen(last);
		while((i = strchr(i, *last)) != 0 )
		{	
			if (strncmp(i, last, ii) == 0 )
				return i;
			i++;
		}
	return NULL;
}


