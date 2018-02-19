#include <stdio.h>                                                
#include <float.h>  // FLT_MAX, FLT_MIN을 사용하기 위해 추가            
                                                                  
typedef union {                                                   
		int   hex;                                            
		float dec;                                            
} int_float ;                                                     
                                                                  
int main(void) {                                                  
	int_float data;                                               
                                                                  
	data.hex = 0x7F800000;    // +infinity                        
	printf("+inf=%08X \t %e\n", data.hex, data.dec);              
                                                                  
	data.hex = 0xFF800000;    // -infinity                        
	printf("-inf=%08X \t %e\n", data.hex, data.dec);              
                                                                  
	data.hex = 0x0;	// +0                                         
	printf("+0=%08X \t %e\n", data.hex, data.dec);                
                                                                  
	data.hex = 0x80000000;	// -0                                 
	printf("-0=%08X \t %e\n", data.hex, data.dec);                
	                                                              
	data.dec = FLT_MAX;                                           
	printf("FLT_MAX=%08X \t %e\n", data.hex, data.dec);           
                                                                  
	data.dec = FLT_MIN;                                           
	printf("FLT_MIN=%08X \t %e\n", data.hex, data.dec);           
                                                                  
	return 0;                                                     
}                                                                 
