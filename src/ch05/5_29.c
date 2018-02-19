#include <stdio.h>                                                                               
                                                                                                 
int main(void) {                                                                                 
                                                                                                 
	char strArr2D[][3][7] = { // 3차원 char배열(2차원 문자열 배열)                                  
		{"[0][0]","[0][1]","[0][2]"},                                                    
		{"[1][0]","[1][1]","[1][2]"},                                                    
		{"[2][0]","[2][1]","[2][2]"}                                                     
	};                                                                                       
                                                                                                 
	int i, j;                                                                                
                                                                                                 
	const int ROW = sizeof(strArr2D) / sizeof(strArr2D[0]);                                  
	const int COL = sizeof(strArr2D[0]) / sizeof(strArr2D[0][0]);                            
                                                                                                 
	for(i=0;i<ROW;i++) {                                                                     
		for(j=0;j<COL;j++) {                                                             
			printf("strArr2D[%d][%d]=%s\n", i, j, strArr2D[i][j]);                   
		}                                                                                
	}                                                                                        
                                                                                                 
	return 0;                                                                                
}                                                                                                
