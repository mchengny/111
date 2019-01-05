#include<stdio.h>

int main()
{
	// Initialize the params 
	int input[5], book[10];
	int i, j, t;
	// Set the bucket array
	for(i=0;i<10;i++){
		book[i] = 0;
	}
	// Input array waited and finish sort
	for(i=0;i<5;i++){
		scanf("%d", &t);
		book[t]++;
	}	
	// Output sorted array
	for(i=0;i<10;i++){
		for(j=0;j<book[i];j++){
			printf("%d ", i);
		}
	}
	
	return 0;
}


