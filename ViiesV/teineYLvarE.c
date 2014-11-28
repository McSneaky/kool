/**
* Fail:        kolmasYLvarE.c
* Autor:       Margus Kevin Sünter 142802
*
* Muudetud:    24.11.2014
*
* Kirjeldus:   Programm algoritmi järgi
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber();

int main()
{
	srand(time(NULL)); // Annan "seemne" randomile
	int n, m, i, j;
	// Loen massiivi M mõõtmed
	printf("Sisesta n: ");
	scanf("%d", &n);
	printf("Sisesta m: ");
	scanf("%d", &m);
	printf("Moodustan suvalistest reaalarvudest massiivi mõõtmetega %dx%d\n", n, m);
	int M[m][n], min[n];

	// Täidan massiivi
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &M[i][j]);
			//M[i][j] = randomNumber();
		}
	}
	int miin = M[0][0];
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (miin > M[i][j]) // Kontrollin, kas on väiksemat
			{
				miin = M[i][j]; // Uus väikseim
			}
		}
		min[i] = miin; // Panen väikseima uude massiivi
		miin = M[j][0]; // Resetin väikseima
	}
	
	// Kuvan massiivi
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	printf("Kuvan massiivi min[n]");
	for (i = 0; i < n; i++)
	{
		printf("%d ", min[i]);
	}
	
		
	return 0;
}

// Automaatseks täitmiseks, testimise eesmärgil
int randomNumber()
{
	int number = rand()%100;
	return number;
}
