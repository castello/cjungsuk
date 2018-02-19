#include <stdio.h>                                                                 
                                                                                   
int main(void) {                                                                   
	int i=0, j=0;  // ','는 구분자                                                
	int result=0;                                                              
                                                                                   
	result = i=3, i++, j++;   // (result = i=3), i++, j++;와 동일                
	printf("i=%d, j=%d, result = %d\n", i, j, result); // ','는 구분자            
                                                                                   
	result = (i=3, i++, j++); // ','는 콤마 연산자                                 
	printf("i=%d, j=%d, result = %d\n", i, j, result); // ','는 구분자            
                                                                                   
	return 0;                                                                  
}                                                                                  
