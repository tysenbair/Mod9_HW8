/*
 * =====================================================================================
 *
 *       Filename:  Ferengi_HW8_Task2.c
 *       	Usage:  ./Ferengi_HW8_Task2.c
 *    Description:  read input till EOF
 *
 *        Version:  1.0
 *        Created:  04/02/2017 11:09:37 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Breckin Lassen (), breckinlassen@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* For exit */
#include <string.h>
#include <ctype.h>
#define MAX 81
/* Function Prototypes */
void Usage(char *info[]);
void GetOptions(char *argv[]);
void PrintOptions(char *select, char str[MAX]);
/* Main Program */
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Missing or wrong number of parameters\n");
		Usage(argv);
	}
	else if(argc > 1 && strcmp(argv[1], "--help") == 0)
	{
		printf("Help information\n");
		Usage(argv);
	}
	GetOptions(argv);
//	PrintOptions(select, &str[MAX]);
	return 0;
}
/* Function Defenitions */
void Usage(char *info[])
{
	printf("Usage: %s [-p | -u | -l]\n", info[0]);
	exit(1);
}
void GetOptions(char *argv[])
{
	int i = 0;
	char str1[MAX];
	char str2[MAX];
	double pos;
	if(strcmp(argv[1], "-p") == 0|| strcmp(argv[1], "-u") == 0||strcmp(argv[1], "-l") == 0) 
	{
		printf("Selecting Option [%s]\n", argv[1]);
	}
	else 
	{
		printf("[%s] is an invalid flag; using default [-p]\n", argv[1]);
	}
	printf("Type input. Output will be based on option.\n");
	printf("Enter Ctrl-D to stop user input: ");
	while(scanf("%lf", &pos) != EOF)
{
	while((str1[i++] = getchar()) != '\n');
	{
		while(str1[i])
		{
			if(strcmp(argv[1], "-u") == 0)
			{
				str2[i] = toupper(str1[i]);
			}
			else if(strcmp(argv[1], "-l") == 0)
			{
				str2[i] = tolower(str1[i]);
			}
			else
			{
				str2[i] = str1[i];
			}
			printf("%c", str2[i]);
			i++;
		}
	}
}	
	return;
}
/*void PrintOptions(char *select, char str[MAX])
{
	char str1[MAX];
	int j = 0;
	switch(pos)
	{
		case'p':
			puts(str1);
			break;
		case'l':
			while(str1[j] != '\0')
			{
				str1[j] = tolower(str1[j]);
				j++;
			}
			break;
		case 'u':
			while(str1[j] != '\0')
			{
				str1[j] = toupper(str1[j]);
			}
	return;
}*/
