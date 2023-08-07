/* Ahmed Zahran
   Lab 1 Assignment 1


*/


#include <stdio.h>


int main(){

while(1){
	int num;
	printf("Enter the pyramid's base length (odd number): ");
	scanf("%d",&num);

	for (int i = 0 ; i<=(num-1)/2;i++){
		for (int j = 0; j<(num/2)-i;j++){
			printf(" ");
		}
		for(int k = 0; k< 1 + 2*i ;k++){
			printf("*");
		}
		printf("\n");

	}
		printf("\n\n\n");
	}




	return 0;
}