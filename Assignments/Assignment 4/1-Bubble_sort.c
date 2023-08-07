#include <stdio.h>

void bubble_sort(int* arr){
	int length = 10 	,temp;

	for(int i = 0; i <=length-2 ;i++){
		for (int j =0; j<=length-2-i;j++){
			//Swap
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}


	}





}


int main(void){
	
	int arr[10];
	while(1){
		printf("Enter ten elements:\n");
		for(int i = 0; i<10;i++){
			scanf("%d",&arr[i]);
		}
		bubble_sort(arr);
		printf("Sorted array:\n");
		for(int i=0; i<10;i++){

			printf("%d ",arr[i]);
		}
		printf("\n\n\n");
	}
	



	return 0;
}
