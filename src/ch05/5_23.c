#include <stdio.h>                                                                             
                                                                                               
#define ROW 4                                                                                  
#define COL 3                                                                                  
                                                                                               
int main(void) {                                                                               
	int score[ROW][COL] = {                                                                
		{ 100, 100, 100},                                                              
		{  20,  20,  20},                                                              
		{  30,  30,  30},                                                              
		{  40,  40,  40}                                                               
	};                                                                                     
                                                                                               
	int i, j, sum=0;                                                                       
                                                                                               
// 배열의 모든 요소를 테이블 형태로 출력한다.                                                             
	for(i=0;i<ROW;i++) {                                                                   
		for(j=0;j<COL;j++) {                                                           
			printf("%3d ", score[i][j]);                                           
			sum += score[i][j];  // 각 요소의 값을 sum에 누적한다.                        
		}	                                                                       
		printf("\n");                                                                  
	}                                                                                      
                                                                                               
	printf("sum=%d\n\n", sum);                                                             
                                                                                               
// 배열의 모든 요소를 한 줄에 하나씩 순서대로 출력한다.                                                      
	for(i=0;i<ROW;i++)                                                                     
		for(j=0;j<COL;j++)                                                             
			printf("score[%d][%d]=%d\n", i, j, score[i][j]);                       
                                                                                               
	return 0;                                                                              
}                                                                                              
