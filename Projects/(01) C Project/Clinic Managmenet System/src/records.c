#include <stdio.h>
#include "records.h"
#include "STD_TYPES.h"

u8 ID_exists(u8* patient_count, u32 id, patient* patient_data){

	for(u32 i = 0; i<*patient_count;i++){
		if(id == patient_data[i].id){
			return 1;
		}
	}
	return 0;

}

u8 ID_index(u8* patient_count, u32 id,patient* patient_data){

	for(u32 i = 0; i<*patient_count;i++){
			if(id == patient_data[i].id){
				return i;
			}
		}
}
