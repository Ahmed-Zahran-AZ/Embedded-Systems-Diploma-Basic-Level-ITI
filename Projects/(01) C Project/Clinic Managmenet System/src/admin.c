#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "admin.h"
#include "records.h"
#include "STD_TYPES.h"

char validate_password(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u32 Pass_input, try_counter = 0;
	printf("Enter the password: ");

	while (1) {

		scanf("%lu", &Pass_input);
		switch (Pass_input) {
		case 1234:
			return 1;
		default:
			try_counter++;
			break;

		}
		if (try_counter == 3) {
			break;
		}
		printf("Try again: ");

	}

	printf("3 incorrect tries. No more tries");
	return 0;

}

void admin_choices(u8 *patient_count, patient *patient_data, u8 *time_slots) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u8 choice;
	while (1) {
		printf("\n\n(1)Add a new patient record\n");
		printf("(2)Edit an existing patient record\n");
		printf("(3)Reserve a slot with the doctor\n");
		printf("(4)Cancel Reservation\n");
		printf("(5)Return to main menu\n");
		printf("Enter the choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_new_record(patient_count, patient_data);
			break;
		case 2:
			edit_record(patient_count, patient_data);
			break;
		case 3:
			reserve_slot(patient_count, patient_data, time_slots);
			break;
		case 4:
			cancel_reservation(patient_count, patient_data, time_slots);
			break;
		case 5:
			return;
		default:
			printf("Invalid input, try again.\n\n\n");
		}
	}
}

//(1)Adding a new patient:
void add_new_record(u8 *patient_count, patient *patient_data) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u32 id;
	//Take inputs:
	//ID:
	printf("\n\nEnter the ID: ");
	scanf("%lu", &id);
	//Check if ID already exists:
	if (ID_exists(patient_count, id, patient_data)) {
		printf("ID already exists.\n\n\n");
		return;
	} else {

		patient_data[*patient_count].id = id;
		printf("Enter the name: ");
		scanf("%s", &patient_data[*patient_count].name);
		printf("Enter the age: ");
		scanf("%d", &patient_data[*patient_count].age);
		printf("Enter the gender(M/F): ");
		scanf(" %c", &patient_data[*patient_count].gender);
		//Time slot default to none:
		patient_data[*patient_count].slot = "None";
		//Increment patient count
		(*patient_count)++;
		printf("Patient added successfully\n");
	}
}

//(2)Editing an existing record
void edit_record(u8 *patient_count, patient *patient_data) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u32 id;
	u8 index;
	printf("Enter the ID:");
	scanf("%lu", &id);
	if (ID_exists(patient_count, id, patient_data)) {
		index = ID_index(patient_count, id, patient_data);
		printf("Editing....\n");
		printf("Enter the name: ");
		scanf("%s", &patient_data[index].name);
		printf("Enter the age: ");
		scanf("%d", &patient_data[index].age);
		printf("Enter the gender(M/F): ");
		scanf(" %c", &patient_data[index].gender);
		printf("Edits saved successfully\n");
	} else {
		printf("ID Does not exist.\n");
		return;
	}

}

//Reserving a time slot:
void reserve_slot(u8 *patient_count, patient *patient_data, u8 **time_slots) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u8 slot_choice,index,available=1; u32 id;

	printf("Enter the ID: ");
	scanf("%d",&id);
	if (ID_exists(patient_count, id, patient_data)) {
			index = ID_index(patient_count, id, patient_data);
	}
	else{
		printf("ID Does not exist\n");
		return;

	}
	printf("Available time slots:\n");
	for (u8 j = 0; j < 5; j++) {
		available = 1;
		for (u8 i = 0; i < *patient_count; i++) {
			if (!strcmp(patient_data[i].slot, time_slots[j])) {
				available = 0 ;
				break;
			}
		}
		(available)?printf("(%d) %s\n",j,time_slots[j]):printf("(%d)Not available\n",j) ;
	}
	 printf("Enter the time slot: ");
	  scanf("%d", &slot_choice);

	  if (slot_choice < 0 || slot_choice >= 5) {
	    printf("Invalid time slot.\n");
	    return;
	  }

	  patient_data[index].slot = time_slots[slot_choice];
}

void cancel_reservation(u8 *patient_count, patient *patient_data,
		u8 **time_slots) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u32 id;
	u8 index;
	printf("Enter the ID:");
	scanf("%lu", &id);
	if (ID_exists(patient_count, id, patient_data)) {
		index = ID_index(patient_count, id, patient_data);
		patient_data[index].slot = "None";
	} else {
		printf("ID Does not exist.\n");
		return;
	}

}
