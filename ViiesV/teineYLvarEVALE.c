/**
* Fail:        teineYLvarE.c
* Autor:       Margus Kevin Sünter 142802
*
* Muudetud:    24.11.2014
*
* Kirjeldus:   Koostab ühemõõtmelise massiivi kahemõõtlemise massiivi veegude minimaalsetest elementidest
*/

#include <stdio.h>

int main()
{
	// Suvaline täisarvudest kahemõõtmeline massiiv suurusega 5 x 5
	int kaks[5][5] = {
    {1, 2, 3, 4, 5},
    {2, 3, 4, 5, 6},
    {3, 4, 5, 6, 7},
    {8, 9, 10, -11, 159},
    {-123, 234, 345, 456, -1232}};
    
    int yks[5], min = kaks[0][0], i, j;
    
    // Ketran 5 x 5 massiivi läbi
    for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (min > kaks[i][j]) // Kontrollin, kas on väiksemat
			{
				min = kaks[i][j]; // Uus väikseim
			}
		}
		yks[i] = min; // Panen väikseima uude massiivi
		min = kaks[i+1][0]; // Resetin väikseima
	}
	
	/*
	for (i = 0; i < 5; i++)
	{
		printf("%d ", yks[i]);	// Kuvan yhem66tmelise massiivi
	}
    */
	return 0;
}
