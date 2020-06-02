#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main()
{
	int data[10] = {5, 8, 4, 2, 1, 3, 6, 7, 9, 10};
	int i;
	int temp;

	for (i=0; i<10; i++)
	{
		printf("정렬전 숫자%d", data[i]);
	}
	printf("\n");


	for(i=0; i<10; i++)
	{
		for(int j =0; j<10; j++)
		{
			if(data[i]>data[j])
			{
				
			}
		}
	}
}