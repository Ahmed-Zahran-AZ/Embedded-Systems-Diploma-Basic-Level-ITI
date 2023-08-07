#include <stdio.h>


int main(void){
    int Ahmed_ID = 1234, Ahmed_Pass=7788, Amr_ID=5678,Amr_Pass=5566, Wael_ID=9870,Wael_Pass = 1122, ID_input,Pass_input,try_counter=0;

    printf("Enter your ID: ");
    scanf("%d",&ID_input);

    if(ID_input == Ahmed_ID || ID_input == Amr_ID || ID_input == Wael_ID){
        printf("Enter your password: ");
    }
    else{
        printf("You are not registered");
        return 0;
    }


    while(1){
        scanf("%d",&Pass_input);
        switch(Pass_input){
            case 7788:
                        printf("Welcome Ahmed");
                        return 0;
            case 5566:
                        printf("Welcome Amr");
                        return 0;
            case 1122:
                        printf("Welcome Wael");
                        return 0;
            default:
                        try_counter++;
                        break;

        }
        if(try_counter==3){
            break;
        }
        printf("Try again: ");

    }

    printf("3 incorrect tries. No more tries");
    return 0;

}