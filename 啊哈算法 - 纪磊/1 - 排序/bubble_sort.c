#include<stdio.h>

int main(){
	// Initialize the params
	int array[5];
	int i, j, t;
	// Input array 
	for(i=0;i<5;i++){
		scanf("%d", &array[i]);
	}
	// Implement bubble sort
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			// Exchange the near elements under the special condition
			if(array[j] > array[j+1]){
				t = array[j];
				array[j] = array[j+1];
				array[j+1] = t;
			}
		}
	}
	// Output the sorted array
	for(i=0;i<5;i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
