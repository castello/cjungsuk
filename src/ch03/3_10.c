#include <stdio.h>                                                                        
                                                                                          
int main(void) {                                                                          
	char a = 'a';                                                                     
	char d = 'd';                                                                     
                                                                                          
	char zero = '0';                                                                  
	char two  = '2';                                                                  
                                                                                          
	printf("'%c' - '%c' = %d\n", d, a, d - a);           // 'd'-'a'=3                 
	printf("'%c' - '%c' = %d\n", two, zero, two - zero);  // '2'-'0'=2                
	printf("'%c'=%d\n", a, a);                                                        
	printf("'%c'=%d\n", d, d);                                                        
	printf("'%c'=%d\n", zero, zero);                                                  
	printf("'%c'=%d\n", two,  two);                                                   
                                                                                          
	return 0;                                                                         
}                                                                                         
