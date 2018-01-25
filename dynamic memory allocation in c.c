//to dynamically allocate the memory in c we use malloc and calloc
#include<stdio.h>
#include<malloc.h>
int main(int argc, char const *argv[])
{
	int *arr=(int *) malloc (10 * sizeof(int));//in this case malloc saves the memory for 10 integer

	int *a = (int *) calloc (10, sizeof(int));// calloc saves memory for 10 integers and initialises the array with 0
	printf("calloc initialises the array with 0 %d \n",a[6]);

	free(arr);//to free the memory
	free(a);
	return 0;
}