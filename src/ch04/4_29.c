#include <stdio.h>                                                                      
                                                                                        
int main(void) {                                                                        
	int i, tmp;                                                                     
                                                                                        
	for(i=1;i<=100;i++) {                                                           
		printf("i=%d ", i);                                                     
                                                                                        
		tmp = i;                                                                
                                                                                        
		do {                                                                    
			if(tmp%10%3==0 && tmp%10!=0) // tmp가 3의 배수인지 확인(0은 제외)      
				printf("짝");                                            
		} while(tmp/=10);  // tmp /= 10은 tmp = tmp / 10과 동일                    
                                                                                        
		printf("\n");                                                           
	}                                                                               
                                                                                        
	return 0;                                                                       
}                                                                                       
