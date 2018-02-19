#include <stdio.h>                                                           
                                                                             
int main(void) {                                                             
	int score[5];                                                        
	int i, tmp;                                                          
	int k = 1;                                                           
                                                                             
	score[0] = 50;                                                       
	score[1] = 60;                                                       
	score[k+1] = 70;   // score[2] = 70                                  
	score[3] = 80;                                                       
	score[4] = 90;                                                       
                                                                             
	tmp = score[k+2] + score[4];  // tmp = score[3] + score[4]           
                                                                             
	// for문으로 배열의 모든 요소를 출력한다.                                             
	for(i=0; i<5; i++) {                                                 
		printf("score[%d]:%d\n",i, score[i]);		             
	}                                                                    
                                                                             
	printf("tmp:%d\n", tmp);                                             
	printf("score[%d]:%d\n",  7, score[7]);  // 범위를 벗어난 값을 index로 사용 
	printf("score[%d]:%d\n", -2, score[-2]); // 범위를 벗어난 값을 index로 사용 
                                                                             
	return 0;                                                            
}                                                                            
