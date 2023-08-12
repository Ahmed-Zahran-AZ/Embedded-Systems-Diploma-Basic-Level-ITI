#ifndef ADMIN_H
#define ADMIN_H
#include "STD_TYPES.h"
#include "records.h"


char validate_password(void);
void admin_choices(u8* patient_count, patient* patient_data,u8* time_slots);


//4 Options:
void add_new_record(u8*,patient*);
void edit_record(u8*,patient*);
void reserve_slot(u8*,patient*,u8** time_slots);
void cancel_reservation(u8*,patient*,u8** time_slots);



#endif
