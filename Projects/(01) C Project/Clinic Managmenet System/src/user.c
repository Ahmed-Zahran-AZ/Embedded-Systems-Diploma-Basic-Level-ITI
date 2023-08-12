#include <stdio.h>
#include "user.h"
#include "STD_TYPES.h"

void user_choices(u8 *patient_count, patient *patient_data) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u8 choice;
	while (1) {
		printf("(1) View Patient Record\n");
		printf("(2) View Today's Reservations\n");
		printf("(3) Return to main menu\n");
		printf("Enter an option: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			view_record(patient_count,patient_data);
			break;
		case 2:
			view_today_resv(patient_count,patient_data);
			break;
		case 3:
			return;
		default:
			printf("Invalid input, try again.\n\n\n");
		}
	}

}

void view_record(u8 *patient_count, patient *patient_data) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	u32 id; u8 index;
	printf("Enter the ID: ");
	scanf("%d",&id);
	if (ID_exists(patient_count, id, patient_data)) {
			index = ID_index(patient_count, id, patient_data);
	}
	else{
		printf("ID Does not exist\n");
		return;

	}
	printf("Name: %s",patient_data[index].name);
	printf("Age: %d",patient_data[index].age);
	printf("Gender: %c",patient_data[index].gender);
	printf("\n\n\n");
}
void view_today_resv(u8 *patient_count, patient *patient_data) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	for (u8 i = 0; i < patient_count; i++) {
		printf("(%d) ID: %d\tReservation: %s\n", i + 1, patient_data[i].id,
				patient_data[i].slot);
	}
}
