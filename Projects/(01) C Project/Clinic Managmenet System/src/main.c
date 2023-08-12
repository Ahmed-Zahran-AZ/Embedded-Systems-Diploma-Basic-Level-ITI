/*
 *		Clinic Management System
 *      Author: Ahmed Zahran
 */

#include <stdio.h>
#include "records.h"
#include "admin.h"
#include "user.h"
#include "STD_TYPES.h"
#define MAX_SIZE 50


int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	/*Global variables*/
	u8 patient_count = 0;
	patient patient_data[MAX_SIZE];
	u8** time_slots={"2 PM - 2:30 PM","2:30 PM - 3 PM","3 PM - 3:30 PM","4 PM - 4:30 PM","4:30 PM - 5 PM"};
	//Choose admin or user mode:
	while(1){
	u32 user_admin_choice;
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
	printf("(1) Admin Mode\n(2) User Mode\nEnter the choice: ");
	scanf("%lu", &user_admin_choice);

	//Branch into admin and user mode
	if (user_admin_choice == 1) {

		if (validate_password()) {
			//Valid Password -> ADMIN OPTIONS:
			admin_choices(&patient_count, patient_data,time_slots);
		}
		else{
			//Invalid Password -> Exit the program
			return 0;
		}
	}
	else if(user_admin_choice == 2){
		user_choices(&patient_count,patient_data);

	}
	}

}

