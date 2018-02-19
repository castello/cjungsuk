#include <stdio.h>                                                                                
                                                                                                  
int main(void) {                                                                                  
	// 반(BAN), 번(BUN), 과목(SUB)                                                               
	int score[][4][3] = {                                                                     
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
			{  65,  65,  60 },  // 2반 4번                                             
		}                                                                                 
	};                                                                                        
                                                                                                  
	int i, j, k;                                                                              
                                                                                                  
	const int BAN = sizeof(score) / sizeof(score[0]);                                         
	const int BUN = sizeof(score[0]) / sizeof(score[0][0]);                                   
	const int SUB = sizeof(score[0][0]) / sizeof(score[0][0][0]);                             
                                                                                                  
	for(i=0;i<BAN;i++) {                                                                      
		printf("[%d반]\n", i+1);                                                           
                                                                                                  
	for(j=0;j<BUN;j++) {                                                                      
			printf("%d번 ", j+1);                                                      
                                                                                                  
			for(k=0;k<SUB;k++)                                                        
				printf("%3d ", score[i][j][k]);			                  
			puts("");                                                                 
		}                                                                                 
		puts("");                                                                         
	}                                                                                         
                                                                                                  
	for(i=0;i<BAN;i++)                                                                        
		for(j=0;j<BUN;j++)                                                                
			for(k=0;k<SUB;k++)                                                        
				printf("score[%d][%d][%d]=%d\n", i,j,k, score[i][j][k]);	
                                                                                                  
	return 0;                                                                                 
}                                                                                                 
