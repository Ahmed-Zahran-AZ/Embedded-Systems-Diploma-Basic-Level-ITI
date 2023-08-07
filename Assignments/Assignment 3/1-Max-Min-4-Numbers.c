
#include <stdio.h>

int max_val(int* arr,int size){
	int max = arr[0];
	for(int i =0;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int min_val(int* arr,int size){
	int min = arr[0];
	for(int i =0;i<size;i++){
		if(arr[i]<min){
		}
	}
	return min;
}



int main(void) {


	int arr[4];
	while (1) {
		printf("Enter 4 Numbers to output their maximum and minimum:\n");
		for (int i = 0; i < 4; i++) {
			scanf("%d", &arr[i]);
		}
		printf("Minimum value: %d\n", min_val(arr, 4));
		printf("Maximum value: %d\n\n\n", max_val(arr, 4));
	}
}
