#include <stdio.h>                                          
                                                            
typedef union {                                             
		int   hex;                                          
		float dec;                                          
} int_float ;                                               
                                                            
int main(void) {                                            
	int_float data;                                         
                                                            
	data.dec = 12.625f;                                     
	printf("hex=%08X \t dec=%e\n", data.hex, data.dec);     
                                                            
	data.hex = 0x414A0000;                                  
	printf("hex=%08X \t dec=%e\n", data.hex, data.dec);     
                                                            
	return 0;                                               
}                                                           
