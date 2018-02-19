#include <stdio.h>                                                
                                                                  
int main(void) {                                                  
	int score[4][3] = {0};  // 배열의 모든 요소를 0으로 초기화                                                            
                                                                  
	const int ROW = sizeof(score) / sizeof(score[0]);         
	const int COL = sizeof(score[0]) / sizeof(score[0][0]);   
                                                                  
	printf("sizeof(score)      =%d\n", sizeof(score));        
	printf("sizeof(score[0])   =%d\n", sizeof(score[0]));     
	printf("sizeof(score[0][0])=%d\n", sizeof(score[0][0]));  
	printf("ROW=%d\n", ROW);                                  
	printf("COL=%d\n", COL);                                  
                                                                  
	return 0;                                                 
}                                                                 
