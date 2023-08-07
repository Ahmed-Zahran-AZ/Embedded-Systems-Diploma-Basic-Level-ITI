#include <stdio.h>
int add(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 + num2;
}
int subtract(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 - num2;
}
int multiply(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 * num2;
}
int divide(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 / num2;
}
int my_and(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 & num2;
}
int my_or(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 | num2;
}
int my_not(void){
    int num1;
    scanf("%d ",&num1);
    return ~num1;
}
int my_xor(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 ^ num2;
}
int my_remainder(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    return num1 % num2;
}
int inc(void){
    int num1;
    scanf("%d",&num1);
    return ++num1;
}
int dec(void){
    int num1;
    scanf("%d",&num1);
    return --num1;
}


int main(void)
{
    
    char op_id;
    while(1){
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: And\n6: Or\n7: Not\n8: Xor\n9: Reminder\n10: Increment\n11: Decrement\n");
    printf("Enter the operation ID: ");
    scanf(" %d",&op_id);
    switch(op_id){
        case 1:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",add());
            break;
        case 2:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",subtract());
            break;
        case 3:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",multiply());
            break;
        case 4:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",divide());
            break;
        case 5:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",my_and());
            break;
        case 6:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",my_or());
            break;
        case 7:
            printf("Enter the 1 operand: ");
            printf("Result: %d\n\n\n",my_not());
            break;
        case 8:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",my_xor());
            break;
        case 9:
            printf("Enter the 2 operands: ");
            printf("Result: %d\n\n\n",my_remainder());
            break;
        case 10:
            printf("Enter the 1 operand: ");
            printf("Result: %d\n\n\n",inc());
            break;
        case 11:
            printf("Enter the 1 operand: ");
            printf("Result: %d\n\n\n",dec());
            break;
        default:
            printf("Enter a valid operator.\n\n\n");
            break;
    }
    }
    return 0;
}
