#include <stdio.h>                                   
                                                     
int main(void) {                                     
	int i, j;                                    
                                                     
	i=11;                                        
                                                     
	printf("자, 이제 카운트다운을 시작합니다.\n");        
                                                     
	while(i--) {                                 
		printf("%d\n", i);                   
                                                     
		for(j=0;j<1000000000;j++) {          
				;                    
		}                                    
	}                                            
                                                     
	printf("GAME OVER\n");                       
	return 0;                                    
}                                                    
