// input an array size and elements and then print the array
#include <stdio.h>
int main(){

	int array[30];
	int length;
         printf("Enter the length of an array \n");
	 scanf("%d",&length);
	for (int i=0; i<length;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}

	printf("\n");
	for (int i=0;i<length;i++)
		printf("array[%d] = %d\n",i,array[i]);
	return 0;
}
