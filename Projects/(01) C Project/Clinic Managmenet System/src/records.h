#ifndef RECORDS_H
#define RECORDS_H
#include "STD_TYPES.h"


struct patient{
	s8* name;
	u8 age;
	s8 gender; //'M' or 'F'
	u32 id;
	u8* slot;
};
typedef struct patient patient;
u8 ID_exists(u8* patient_count, u32 id,patient* patient_data);

u8 ID_index(u8* patient_count, u32 id,patient* patient_data);
#endif

