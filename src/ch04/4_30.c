#include <stdio.h>                          
                                            
int main(void) {                            
	int sum = 0;                        
	int i = 0;                          
                                            
	while(1) {                          
		if(sum > 100)               
			break;              
		++i;                        
		sum += i;                   
	} // end of while                   
                                            
	printf("i=%d\n", i);                
	printf("sum=%d\n", sum);            
                                            
	return 0;                                   
}                                           
