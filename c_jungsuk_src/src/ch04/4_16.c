#include <stdio.h>                                                              
                                                                                
int main(void) {                                                                
	int i;                                                                      
                                                                                
	printf("i \t 2*i \t 2*i-1 \t i*i \t 11-i \t i/3 \t i%%3\n");                
printf("----------------------------------------------------\n");               
                                                                                
	for(i=1;i<=10;i++) {                                                        
		printf("%d \t %d \t %d \t %d \t %d \t %d \t %d\n",                      
                i, 2*i, 2*i-1, i*i, 11-i, i/3, i%3);                            
	}                                                                           
                                                                                
	return 0;                                                                   
}                                                                               
