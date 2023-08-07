#include <stdio.h>


int main(void){
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,search;

    printf("Enter 10 Numbers, separated by newlines:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);

    printf("Enter the value to search for: ");
    scanf("%d",&search);

    if(search == num1){
        printf("Value is at element 1");
    }
    else if(search == num2){
        printf("Value is at element 2");
    }
    else if(search == num3){
        printf("Value is at element 3");
    }

    else if(search == num4){
        printf("Value is at element 4");
    }

    else if(search == num5){
        printf("Value is at element 5");
    }

    else if(search == num6){
        printf("Value is at element 6");
    }


    else if(search == num7){
        printf("Value is at element 7");
    }


    else if(search == num8){
        printf("Value is at element 8");
    }

    else if(search == num9){
        printf("Value is at element 9");
    }

    else if(search == num10){
        printf("Value is at element 10");
    }
}