#include <stdio.h>                                                
#include <stdlib.h>                                               
#include <time.h>                                                 
                                                                  
int main(void) {                                                  
	int ball[45];   // 45개의 정수값을 저장하기 위한 배열 선언.             
	const int LEN = sizeof(ball) / sizeof(ball[0]);               
	int i, n, tmp;                                                
                                                                  
	srand((unsigned)time(NULL));                                  
                                                                  
	// 배열의 각 요소에 1~45의 값을 저장한다.                              
	for(i=0;i<LEN;i++)                                            
		ball[i] = i+1;    // ball[0]에 1이 저장된다.                  
                                                                  
	// 배열에 저장된 값을 섞는다.                                        
	for(i=0;i<LEN;i++) {                                          
		n = rand() % 45;  // 배열 범위(0~44)의 임의의 값을 얻는다.        
                                                                  
		tmp     = ball[i];                                        
		ball[i] = ball[n];                                        
		ball[n] = tmp;                                            
	}                                                             
	// 배열 ball의 앞에서 부터 6개의 요소를 출력한다.                        
	for(i=0;i<6;i++)                                              
		printf("ball[%d]=%d\n", i, ball[i]);                      
}                                                                 
