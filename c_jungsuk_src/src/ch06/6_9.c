#include <stdio.h>             
                               
void second(void) {            
	printf("second()\n");         
}                              
                               
void first(void) {             
	second();                     
}                              
                               
int main(void) {               
	first();                      
	return 0;                     
}                              
                               
