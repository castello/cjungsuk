#include <stdio.h>                                                                
#define STU 4    // 학생수                                                          
#define SUB 3    // 과목수                                                          
                                                                                  
// 배열 score를 전역적으로 선언                                                         
int score[STU + 1][SUB + 1] = {                                                   
	{ 100, 100, 100 },                                                           
	{ 25,  20,  20  },                                                           
	{ 35,  30,  30  },                                                           
	{ 45,  40,  40  }                                                            
};                                                                                
                                                                                  
void sumScore(void);     // 총점을 계산하는 함수                                        
void printScore(void);   // 성적을 출력하는 함수                                        
                                                                                  
int main(void) {                                                                  
	sumScore();                                                                  
	printScore();                                                                
	return 0;                                                                    
}                                                                                 
                                                                                  
void sumScore(void) {                                                             
	int i, j;                                                                    
	for (i=0; i<STU; i++)                                                        
		for (j=0; j<SUB; j++) {                                              
			score[i][SUB] += score[i][j];                                
			score[STU][j] += score[i][j];                                
		}                                                                    
}                                                                                 
                                                                                  
void printScore(void) {                                                           
	int i, j;                                                                    
	printf("번호 국어 영어 수학 총점  평균\n");                                          
	printf("===============================\n");                                 
                                                                                  
	for (i=0; i<STU; i++) {                                                      
		printf(" %d   ", i + 1);                                             
                                                                                  
		for (j=0; j<SUB; j++)                                                
			printf("%3d  ", score[i][j]);                                
                                                                                  
		printf(" %3d  %5.1f\n", score[i][SUB], score[i][SUB] / (float)SUB);  
	}                                                                            
	printf("===============================\n총점 ");                             
                                                                                  
	for (j=0; j<SUB; j++)                                                        
		printf("%3d  ", score[STU][j]);                                      
                                                                                  
	puts("");                                                                    
}                                                                                 
                                                                                  
