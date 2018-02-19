#include <stdio.h>                                        
                                                          
int main(void) {                                          
	int a = 5;                                        
	int b = 0;                                        
                                                          
	printf("a=%d, b=%d\n", a, b);                     
	printf("a!=0 || ++b = %d\n", a!=0 || ++b);        
	printf("a=%d, b=%d\n", a, b);                     
	printf("a==0 && ++b = %d\n", a==0 && ++b);        
	printf("a=%d, b=%d\n", a, b);                     
                                                          
	return 0;                                         
}                                                         
