// quicksort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
void Qsort ( int* mas, int low , int high )
{
	int m, i = low, j = high;
	m=mas[(low+high)/2];
	do
	{
		while ( mas[i] < m )
			i++;
		while ( mas[j] > m )
			j--;
		if ( i <= j ) 
		{
			int b = mas[i];
			mas [i] = mas [j];
			mas[j] = b;
			i++;
			j--;
		}
	} while ( i < j );
	if ( j > low ) 
		Qsort ( mas, low ,j );
	if ( i < high ) Qsort ( mas, i , high);
}
	

int main()
{
	
	int n=0;
	srand(time(NULL));
	int* mas;
	scanf ("%d",&n);
	printf("\n");
	
	mas = (int*) malloc (n*sizeof(int));
	for (int i = 0; i<n; i++)
	{
		mas[i] = rand()%100;
		printf("%d\n", mas[i]);
	}
	printf ("\n\n\n");
	Qsort( mas, 0, n-1);

	for ( int i = 0; i< n; i++)
	{ 
		printf("%d\n", mas[i]);
	}
	getch();
	return 0;
}

