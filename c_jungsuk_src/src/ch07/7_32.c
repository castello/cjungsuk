#include <stdio.h>                                                      
#include <string.h>                                                     
                                                                        
int main(void) {                                                        
	char* strArr[] = { "abc", "123", "ABC" };                          
	char* *p = strArr;                                                 
	const int LEN = sizeof(strArr) / sizeof(strArr[0]);                
	int i, j;                                                          
                                                                        
	for(i=0;i<LEN;i++)                                                 
		for(j=0;strArr[i][j];j++)                                  
			printf("strArr[%d][%d]=%c, p[%d][%d]=%c\n", i, j,  
                                        strArr[i][j], i, j, p[i][j]);   
                                                                        
	return 0;                                                          
}                                                                       
