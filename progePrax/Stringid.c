/**
 * Fail:        Stringid.c
 * Autor:       Margus Kevin Sünter 142802
 *
 * Muudetud:    10.11.2014
 *
 * Kirjeldus:   Tunnis tehtud stringi töötluse ül.
 */

#define PIKKUS 5
#define LAIUS 5
#define LEN(x)  (sizeof(x) / sizeof(x[0]))

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void newLine(); // Break Line next rida 
char t2ht(); // Teeb random tähe

int main(int argc, char **argv)
{
	srand(time(NULL));
	char list[PIKKUS][LAIUS];
	char kontroll[] = {'A', 'E', 'I', 'O', 'U'};
	
	int i, j, k; // For loopide jaoks
	
	printf("%d\n", LEN(kontroll));
	
	// Lisab listi
	for (i = 0; i < PIKKUS; i++)
	{
		for (j = 0; j < LAIUS; j++)
		{
			list[i][j] = t2ht()+3;
		}
		
	}
	
	// Kuvab listi
	printf("List alguses:\n");
	for (i = 0; i < PIKKUS; i++)
	{
		for (j = 0; j < LAIUS; j++)
		{
			printf("%c ", list[i][j]);
		}
		newLine();
	}
	
	// T66tlus
	for (i = 0; i < PIKKUS; i++)
	{
		for (j = 0; j < LAIUS; j++)
		{			
			for (k = 0; k < LEN(kontroll); k++) // Kontrollib, kas on täishäälik
			{
				if (list[i][j] == kontroll[k])
				{
					list[i][j] = '*';
				}
			}
			
			if (list[i][j] != '*') // Juhul kui pole täishäälik
			{
				list[i][j] = '-';
			}
		}	
	}
	
	// Kuvab listi
	printf("\nList peale töötlust\n");
	for (i = 0; i < PIKKUS; i++)
	{
		for (j = 0; j < LAIUS; j++)
		{
			printf("%c ", list[i][j]);
		}
		newLine();
	}
	
	// TEST area 51!
	
	return 0;
}

void newLine()
{
	printf("\n");
}

char t2ht()
{
	char vastus = (rand() % 25) + 65;
	return vastus;
}
