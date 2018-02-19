#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int i, j;                                                  
                                                                   
	for(i=1;i<=5;i++) {                                        
		for(j=1;j<=5;j++) {                                
			if(i==j)                                   
				printf("[%d,%d]", i, j);	
			else                                       
				printf("%5c", ' ');		
                                                                   
		}                                                  
		printf("\n");                                      
	}                                                          
                                                                   
	return 0;                                                  
}                                                                  
