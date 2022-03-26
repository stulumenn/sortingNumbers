#include <stdio.h>

#define SIZE 3

void sortingNumbers (int *m1, int *m2);

int main()
{
	int n[SIZE];

	printf("Please enter %d integer numbers.\n", SIZE);
	
	for (int i = 1; i < SIZE; i++)
	{
		scanf("%d\n", &n[i]);
	}

	for(int i=1; i < SIZE; i++)
	{
		sortingNumbers(&n[i], &n[++i]);
	}

	int i;
	printf("Numbers you have entered sorted by %d < %d < %d\n", n[++i], n[++i], n[++i]);


	return 0;
}

void sortingNumbers (int *m1, int *m2){

	int temp; 

	if ( *m1 > *m2){
		temp = *m1;
		*m1 = *m2;
		*m2 = temp;
	}
}