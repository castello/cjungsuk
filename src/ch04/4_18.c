#include <stdio.h>                               
                                                 
int main(void) {                                 
	int num;                                 
	int i, j;                                
                                                 
	printf("*을 출력할 라인의 수를 입력하세요.>");    
	scanf("%d", &num);                       
                                                 
	for(i=0;i<num;i++) {                     
		for(j=0;j<=i;j++) {              
			printf("*");             
		}                                
		printf("\n");                    
	}                                        
                                                 
	return 0;                                
}                                                
