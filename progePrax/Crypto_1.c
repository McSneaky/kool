/**
 * Fail:        Cryto_1.c
 * Autor:       Margus Kevin Sünter 142802
 *
 * Muudetud:    17.11.2014
 *
 * Kirjeldus:   Tunnis tehtud crtypto 2 Mitte esimene.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define LEN(x) (sizeof(x) / sizeof(x[0]))

char t2ht();
void newLine();
void clear();
void test();

int main()
{
	srand(time(NULL));
	//int pikkus;
	char s6na[] = "TEREMAAILM";	
	char v6ti[] = "VOTI";
	int j = 0, i = 0;
	
	
	printf("Sinu sõna on TEREMAAILM!\nSinu võti on VOTI\n");
	// strlen(s6na[32]);
	
	
	for(i = 0; i < (strlen(s6na)); i++)
	{
		for(j = 0; j < (strlen(v6ti)); j++)
		{
			printf("%c", ((s6na[i] - 65) + (v6ti[j] - 65)));
		}
	}
	
	
	

	// #### Area 52 test! ####
	/*
	printf("%d\n", LEN(s6na));
	newLine();
	printf("%d", strlen(s6na));
*/
	/*
	scanf("%s", tS6na);
	strcat(s6na, tS6na);
	strcat(s6na, tS6na);
	printf("s6na: %s\n", s6na);
	*/
	
	/*x[0] = getchar();
	if (x[0] == 10)
	{
		printf("%d\n", x[0]);
		printf("wasd");
	}	
	*/
		/*
	while((x[1] = getchar()) != 10)
	{
		if(x[1] == 10)
		{
			printf("Täidan edukalt programmi!");
			printf("x %s", x);
			printf("s6na %s", s6na);
		}
		else
		{
			printf("nn %s", x);
			strcat(s6na, x);
		}
	}
*/
	/*
	
*/
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

void clean()
{
    if(__linux__)
    {system("clear");}
    else{system("cls");}
}

void test()
{
	printf("Test'!");
}
