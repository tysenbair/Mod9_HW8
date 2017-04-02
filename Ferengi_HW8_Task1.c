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
void StringIn(void);

/* Main Program */
int main(int argc, char *argv[])
{
	if(argc != 3)
	{	
		Usage();
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
	
	return;
}

void StringIn(void)
{
	
	return;
}


