#include <stdio.h>                                                                              
                                                                                                
int main(void) {                                                                                
	unsigned char han[] = "°¡";                                                              
                                                                                                
	printf("han[0]=%c (%x)\n", han[0], han[0]);                                             
	printf("han[1]=%c (%x)\n", han[1], han[1]);                                             
	printf("han[0]han[1]=%c%c(%x%x)\n", han[0], han[1], han[0], han[1]);                    
                                                                                                
	return 0;                                                                               
}                                                                                               
