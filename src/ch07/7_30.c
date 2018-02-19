#include <stdio.h>                                                                   
#include <string.h>                                                                  
                                                                                     
int main(void) {                                                                     
	char* pArr[] = {"abcd", "123", "ABC" };                                         
	char* tmp;                                                                      
	const int LEN = sizeof(pArr) / sizeof(pArr[0]);                                 
	int i, j;                                                                       
                                                                                     
	for(i=0;i<LEN;i++) {                                                            
		printf("pArr[%d]=%s\n", i, pArr[i]);	                                
	}                                                                               
                                                                                     
	for(i=0;i<LEN;i++) {                                                            
		for(j=0;j <= strlen(pArr[i]);j++) {                                     
			printf("pArr[%d][%d]=%c, %d\n",i,j,pArr[i][j],pArr[i][j]);      
		}                                                                       
	}                                                                               
                                                                                     
	// pArr[0]과 pArr[1]의 값을 교환 - 첫 번째 문자열과 두 번째 문자열의 순서 변경                 
	tmp     = pArr[0];                                                              
	pArr[0] = pArr[1];                                                              
	pArr[1] = tmp;                                                                  
	                                                                                
	// pArr[2]의 내용을 변경                                                            
	pArr[2] = "ZZZ";                                                                
                                                                                     
	for(i=0;i<LEN;i++) {                                                            
		printf("pArr[%d]=%s\n", i, pArr[i]);	                                
	}                                                                               
                                                                                     
	return 0;                                                                       
}                                                                                    
