#include <stdio.h>                                                       
#include <stdlib.h>                                                      
#include <time.h>                                                        
                                                                         
int main(void) {                                                         
	int numArr[10];                                                  
	const int LEN = sizeof(numArr) / sizeof(numArr[0]);              
	int i, n, tmp;                                                   
                                                                         
	srand((unsigned)time(NULL));                                     
                                                                         
	for (i=0;i<LEN ;i++) {                                           
  		numArr[i] = i;  // 배열을 0~9의 숫자로 초기화한다.               
  		printf("%d", numArr[i]);                                 
	}                                                                
	printf("\n");                                                    
                                                                         
	for (i=0;i<LEN*2;i++) {                                          
		n = rand() % 10;	// 0~9중의 한 값을 임의로 얻는다.       
                                                                         
		tmp       = numArr[0];                                   
		numArr[0] = numArr[n];                                   
		numArr[n] = tmp;                                         
	}                                                                
                                                                         
	for (i=0;i<LEN;i++) {                                            
		printf("%d", numArr[i]);                                 
	}                                                                
	printf("\n");                                                    
}                                                                        
