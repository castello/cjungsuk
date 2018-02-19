#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	int i, j;                                                           
                                                                            
	for(i=2;i<=9;i++) {                                                 
		for(j=1;j<=9;j++) {                                         
			printf("%d x %d = %d\n", i, j, i*j);		
		}                                                           
	}                                                                   
	return 0;                                                           
}                                                                           
