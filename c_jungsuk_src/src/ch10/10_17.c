#include <stdio.h>                                     
#include <time.h>                                      
#include <stdlib.h>                                    
                                                       
int attack(int percent) {                              
	return ( /* 알맞은 식을 넣으시오. */ ) ? 1 : 0;         
}                                                      
                                                       
int main(void) {                                       
	int i;                                            
                                                       
	srand((unsigned)time(NULL));                      
                                                       
	for (i=0;i<10;i++)                                
		printf("%d", attack(25));                 
	puts("");                                         
                                                       
	return 0;                                         
}                                                      
