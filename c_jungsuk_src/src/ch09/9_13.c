#include <stdio.h>                                           
                                                             
typedef union {                                              
		int    hex;                                     
	float  dec;                                             
	char   byte[4];                                         
} hex_dec;                                                   
                                                             
int main(void) {                                             
	hex_dec  data;                                          
	data.dec = 12.625f;                                     
	printf("hex=%08X \t dec=%e\n", data.hex, data.dec);     
                                                             
	printf("byte[0]=%02X\n", data.byte[0]);                 
	printf("byte[1]=%02X\n", data.byte[1]);                 
	printf("byte[2]=%02X\n", data.byte[2]);                 
	printf("byte[3]=%02X\n", data.byte[3]);                 
	puts("");                                               
                                                             
	return 0;                                               
}                                                            
