#include <stdio.h>                              
                                                
int main(void) {                                
	float  f 	= 9.1234567;            
	double d  = 9.1234567;                  
	double d2 = (double)f;                  
                                                
	printf("f =%20.18f\n", f);              
	printf("d =%20.18f\n", d);              
	printf("d2=%20.18f\n", d2);             
                                                
	return 0;                               
}                                               
