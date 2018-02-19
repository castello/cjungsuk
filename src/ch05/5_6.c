#include <stdio.h>                                                         
                                                                           
int main(void) {                                                           
	int score[] = { 100, 88, 100, 100, 90 };                           
	const int LEN = sizeof(score) / sizeof(score[0]);                  
                                                                           
	int   i, sum = 0;	// 총점을 저장하기 위한 변수                      
	float average = 0.0f;	// 평균을 저장하기 위한 변수                      
                                                                           
	for (i=0; i<LEN ;i++) {                                            
		sum += score[i]; // 배열의 각 요소를 변수 sum에 더한다.            
		printf("score[%d]=%d\tsum=%d\n", i, score[i], sum);        
	}                                                                  
                                                                           
	average = sum/(float)LEN ; // 계산결과를 소수점수로 얻기 위해 float로 형변환  
                                                                           
	printf("총점 : %d\n",    sum);                                      
	printf("평균 : %4.1f\n", average);                                  
                                                                           
	return 0;                                                          
}                                                                          
