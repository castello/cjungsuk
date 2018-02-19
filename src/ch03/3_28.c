#include <stdio.h>                         
                                           
int main(void) {                           
                                           
	int dec  = 1234;                   
	int hex  = 0xABCD;                 
	int mask = 0xF;                    
                                           
	printf("hex=%X\n", hex);           
	printf("%X\n", hex & mask);        
                                           
	hex = hex >> 4;                    
	printf("%X\n", hex & mask);        
                                           
	hex = hex >> 4;                    
	printf("%X\n", hex & mask);        
                                           
	hex = hex >> 4;                    
	printf("%X\n", hex & mask);        
                                           
	return 0;                          
}                                          
