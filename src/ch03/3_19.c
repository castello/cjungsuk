#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	unsigned int ui = 3;                                           
	         int  i = 5;                                           
                                                                    
	printf("ui - i = %u\n", ui - i);   // 4294967294               
	printf("ui - i = %d\n", ui - i);   // -2                       
	printf("ui - i == -2 ? %d\n", ui - i == -2 );                  
	printf("ui - i == 4294967294 ? %d\n", ui - i == 4294967294 );  
	printf("ui - i > 0 ? %d\n", ui - i > 0 );                      
	printf("ui - i < 0 ? %d\n", ui - i < 0 );                      
                                                                    
	return 0;                                                      
}                                                                   
                                                                    
