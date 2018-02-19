#include <stdio.h>                                                                        
                                                                                          
int main(void) {                                                                          
	char strArr[][4] = {                                                              
		"cow",    // strArr[0]                                                    
		"cat",    // strArr[1]                                                    
		"dog"     // strArr[2]                                                    
	};                                                                                
	int i, j;                                                                         
                                                                                          
	const int ROW = sizeof(strArr) / sizeof(strArr[0]);                               
	const int COL = sizeof(strArr[0]) / sizeof(strArr[0][0]);                         
                                                                                          
	for(i=0;i<ROW;i++) {                                                              
		printf("strArr[%d]=%s\n", i, strArr[i]);                                  
	}                                                                                 
                                                                                          
	for(i=0;i<ROW;i++)                                                                
		for(j=0;j<COL;j++)                                                        
   		printf("strArr[%d][%d]=%c %d\n", i, j, strArr[i][j], strArr[i][j]);       
                                                                                          
	return 0;                                                                         
}                                                                                         
