#include <stdio.h>                                                     
#include <time.h>                                                      
#include <stdlib.h>                                                    
                                                                       
int main(void) {                                                       
	int i;                                                            
                                                                       
	srand((unsigned)time(NULL));  // 난수의 씨앗값(seed)을 현재 시간으로 초기화 
	printf("time=%u\n", (unsigned)time(NULL));                        
                                                                       
	for(i=0;i<10;i++)                                                 
		printf("%d ", rand());                                    
	printf("\n\n");                                                   
                                                                       
	srand((unsigned)time(NULL));  // 난수의 씨앗값(seed)을 현재 시간으로 초기화 
	printf("time=%u\n", (unsigned)time(NULL));                        
                                                                       
	for(i=0;i<10;i++)                                                 
		printf("%d ", rand());                                    
	printf("\n");                                                     
                                                                       
	return 0;                                                         
}                                                                      
