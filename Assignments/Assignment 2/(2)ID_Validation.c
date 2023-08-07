#include <stdio.h>



int main(void){
    int ID = 1234, password = 10987,ID_input,password_input;
    char username[]="Ahmed Zahran";

    printf("Enter your ID: ");
    scanf(" %d",&ID_input);

    if(ID == ID_input){ 
        printf("Enter your Password: ");
    }
    else{
        printf("Invalid ID");
        return 0;        
    }


    scanf("%d",&password_input);

    if (password_input==password){
        printf("Username: %s ",username);
    }
    else{
        printf("Incorrect password");
    }
    
    


}