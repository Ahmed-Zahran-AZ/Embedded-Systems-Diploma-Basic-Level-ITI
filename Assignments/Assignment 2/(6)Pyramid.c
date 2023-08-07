/* Ahmed Zahran
   Lab 2 Assignment 6


*/


#include <stdio.h>


int main(){

while(1){
	int height;
	printf("Enter the pyramid's height ");
	scanf("%d",&height);

	for (int i = 0 ; i<=height-1;i++){
		for (int j = 0; j<=height-2-i;j++){
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