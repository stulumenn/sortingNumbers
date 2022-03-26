#include <stdio.h>
#define MAX_SIZE 5

void sorting (int array[], int size);

int main()
{
	int numb[] = {112, 78, 56, 14, 399};

	sorting(numb, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; i++)
		{
			printf("%d ", numb[i]);
		}
		printf("\n");

	return 0;
}
void sorting (int array[], int size)
{
	for(int j = 0; j < MAX_SIZE-1; j++)
	{
		for (int i = j+1; i < MAX_SIZE;i++)
		{
			int temp = array[j];
			if(temp < array [i])
			{
				temp = array[i];
				array[i]=array[j];
				array[j]=temp;
			}
			
		}
	}			
}