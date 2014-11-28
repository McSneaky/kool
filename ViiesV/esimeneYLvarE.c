/**
* Fail:        esimeneYLvarE.c
* Autor:       Margus Kevin Sünter 142802
*
* Muudetud:    24.11.2014
*
* Kirjeldus:   Kuvav maatriksi A[5][5] kõrvaldiagonaali positiivsete elementide korrutise
*/
wasd 
#include <stdio.h> 

int main()
{
    int A[6][6] = {
    {1, 2, 3, 4, 5, -34},
    {2, 3, -4, 5, 6, 123},
    {3, 4, -5, -6, 7, 45},
    {3, 4, -5, -6, 7, 45},
    {8, -9, 10, 11, 159, 23},
    {-123, 234, 345, 456, 1234, -123}};
    
    int i, j = 0, korrutis = 1;
    
	// Kuvab teise asja teisel ajal teist moodi
	for (i = 0; i < 5; i++)
	{
		if (A[i][j] >= 0)
		{
			korrutis = korrutis * A[i][j];
		}	
		j++;
	}

	printf("%d ", korrutis);
	
	return 0;
}
