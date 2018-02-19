#include <stdio.h>                                                      
                                                                        
int main(void) {                                                        
	int a = 10;                                                     
	int b = 4;                                                      
                                                                        
	printf("%d + %d = %d\n",  a, b, a + b);                         
	printf("%d - %d = %d\n",  a, b, a - b);                         
	printf("%d * %d = %d\n",  a, b, a * b);                         
	printf("%d / %d = %d\n",  a, b, a / b);                         
                                                                        
	printf("%d / %f = %f\n",  a, (float)b, a / (float)b);           
                                                                        
	return 0;                                                       
}                                                                       
