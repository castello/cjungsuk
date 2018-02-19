#include <stdio.h>                                                                   
#include <stdlib.h>                                                                  
#include <time.h>                                                                    
                                                                                     
int main(void) {                                                                     
	int numArr[10];                                                              
	const int LEN = sizeof(numArr) / sizeof(numArr[0]);                          
	int i, j, k, tmp;                                                            
                                                                                     
	int chk; // 자리바꿈이 발생했는지 확인하는 변수                                        
                                                                                     
	srand((unsigned)time(NULL));                                                 
                                                                                     
	for (i=0; i<LEN ; i++ ) {                                                    
		numArr[i] = rand() % 10;                                             
		printf("%d", numArr[i]);                                             
	}                                                                            
	printf("\n");                                                                
                                                                                     
	for (i=0;i<LEN-1;i++) {                                                      
		chk = 0; // 매 반복마다 chk를 0으로 초기화 한다.                             
                                                                                     
                                                                                     
		for (j=0;j<LEN-1-i;j++) {                                            
			if(numArr[j] > numArr[j+1]) { // 옆의 값이 작으면 서로 바꾼다.       
				tmp         = numArr[j];                             
				numArr[j]   = numArr[j+1];                           
				numArr[j+1] = tmp;                                   
                                                                                     
				chk = 1; // 자리바꿈이 발생했으니 chk를 1로 바꾼다.           
			}                                                            
		} // end for j                                                       
                                                                                     
		if (chk==0) break;	// 자리바꿈이 없으면 반복문을 벗어난다.                
                                                                                     
		for(k=0;k<LEN;k++)                                                   
			printf("%d", numArr[k]); // 정렬된 결과를 출력한다.                
		printf("\n");                                                        
	} // end of for i                                                            
                                                                                     
	return 0;                                                                    
}                                                                                    
