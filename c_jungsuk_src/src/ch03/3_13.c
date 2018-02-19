#include <stdio.h>                                                         
                                                                           
int main(void) {                                                           
	double pi = 3.141592;                                              
	double shortPi = (int)(pi * 1000 + 0.5) / 1000.0;                  
                                                                           
	printf("%lf\n", shortPi);                                          
                                                                           
	return 0;                                                          
}                                                                          
