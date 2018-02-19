#include <stdio.h>                                                                         
#define STU 4  // 학생수                                                                     
#define SUB 3  // 과목수                                                                     
                                                                                           
int main(void) {                                                                           
	int score[][STU+1][SUB+1] = {                                                      
		{ // 1반                                                                    
			{ 100, 100, 100 },  // 1반 1번                                      
			{  90,  90,  90 },  // 1반 2번                                      
			{  80,  80,  80 },  // 1반 3번                                      
			{  70,  70,  70 },  // 1반 4번                                      
		},                                                                         
                                                                                           
		{ // 2반                                                                    
			{  95,  95,  90 },  // 2반 1번                                      
			{  85,  85,  80 },  // 2반 2번                                      
			{  75,  75,  70 },  // 2반 3번                                      
			{  65,  65,  60 }   // 2반 4번                                      
		}                                                                          
	};                                                                                 
                                                                                           
	const int BAN = sizeof(score) / sizeof(score[0]);                                  
	int i, j, k;                                                                       
                                                                                           
	for(i=0;i<BAN;i++) {                                                               
		printf("[%d반]\n", i+1);                                                    
		printf("번호 국어 영어 수학 총점  평균\n");                                        
		printf("===============================\n");                               
                                                                                           
		for(j=0;j<STU;j++) {                                                       
			printf(" %d   ", j + 1);                                           
                                                                                           
			for(k=0;k<SUB;k++) {                                               
				score[i][j][SUB] += score[i][j][k];                        
				score[i][STU][k] += score[i][j][k];                        
                                                                                           
				printf("%3d  ", score[i][j][k]);                           
			}                                                                  
			// 학생별 총점과 평균을 출력                                              
			printf("%4d  %5.1f\n",                                             
       		score[i][j][SUB], score[i][j][SUB]/(float)SUB);                            
		}                                                                          
                                                                                           
		printf("===============================\n");                               
		printf("총점 ");                                                            
                                                                                           
		for(k=0;k<SUB;k++) {                                                       
			printf("%3d  ", score[i][STU][k]);                                 
		}                                                                          
                                                                                           
		printf("\n\n");                                                            
	}                                                                                  
                                                                                           
	return 0;                                                                          
}                                                                                          
