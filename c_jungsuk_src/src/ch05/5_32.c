#include <stdio.h>                                                                    
                                                                                      
int main(void) {                                                                      
	int m1[2][3] = {                                                              
		{1, 2, 3},                                                            
		{4, 5, 6}                                                             
	};                                                                            
	int m2[3][2] = {                                                              
		{1, 2},                                                               
		{3, 4},                                                               
		{5, 6}                                                                
	};                                                                            
                                                                                      
                                                                                      
	int m3[sizeof(m1)/sizeof(m1[0])][sizeof(m2[0])/sizeof(m2[0][0])] = {0};       
                                                                                      
	const int ROW    = sizeof(m1)    / sizeof(m1[0]);                             
	const int COL    = sizeof(m2[0]) / sizeof(m2[0][0]);                          
	const int M2_ROW = sizeof(m2)    / sizeof(m2[0]);                             
                                                                                      
	int i,j, k;                                                                   
                                                                                      
 	// 행렬곱 m1×m2의 결과를 m3에 저장                                                  
	for(i=0;i<ROW;i++) {                                                          
		for(j=0;j<COL;j++) {                                                  
			for(k=0;k<M2_ROW;k++) {                                       
				m3[i][j] += m1[i][k] * m2[k][j];                      
			}                                                             
		}                                                                     
	}                                                                             
                                                                                      
 	// 행렬 m3를 출력                                                                
	for(i=0;i<ROW;i++) {                                                          
		for(j=0;j<COL;j++)                                                    
			printf("%3d ", m3[i][j]);                                     
		puts("");                                                             
	}                                                                             
                                                                                      
	return 0;                                                                     
}                                                                                     
