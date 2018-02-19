#include <stdio.h>                                                                      
                                                                                        
int main(void) {                                                                        
	int score[] = { 79, 88, 91, 33, 100, 55, 95};                                   
                                                                                        
	int max = score[0]; // 배열의 첫 번째 값으로 최대값을 초기화 한다.                         
	int min = score[0]; // 배열의 첫 번째 값으로 최소값을 초기화 한다.                         
                                                                                        
	const int LEN = sizeof(score) / sizeof(score[0]);                               
	int i;                                                                          
                                                                                        
	// 배열의 두 번째 요소부터 읽기 위해서 변수 i의 값을 1로 초기화 했다.                           
	for(i=1; i<LEN;i++) {                                                           
		if(score[i] > max)                                                      
			max = score[i];                                                 
		else if (score[i] < min)                                                
			min = score[i];                                                 
	}                                                                               
                                                                                        
	printf("최대값 : %d\n", max);                                                     
	printf("최소값 : %d\n", min);                                                     
}                                                                                       
