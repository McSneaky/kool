/**
 * Fail:        Crypto_1Vol2.c
 * Autor:       Margus Kevin Sünter 142802
 *
 * Muudetud:    17.11.2014
 *
 * Kirjeldus:   Tunnis tehtud crtypto 2 vol 2 Mitte esimene.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PIKKUS 10;

char t2ht();
void newLine();
void clear();

int main()
{
	srand(time(NULL));
	char text[PIKKUS], key[8];
	
	for (i = 0; i < 6; i++)
	{
		
	}
	
	
	return 0;
}

char t2ht()
{
	char vastus = (rand() % 25) + 65;
	return vastus;
}

void newLine()
{
	printf("\n");
}

void clean()
{
    if(__linux__)
    {system("clear");}
    else{system("cls");}
}
