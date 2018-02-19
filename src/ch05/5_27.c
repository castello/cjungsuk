#include <stdio.h>                                                                
#include <string.h>    // strcpy()를 사용하기 위해 추가                                 
                                                                                  
int main(void) {                                                                  
	char strArr[][4] = {"abc","def","ghi"};                                   
	char tmp[4];                                                              
	int  i, j;                                                                
                                                                                  
	const int ROW = sizeof(strArr) / sizeof(strArr[0]);                       
                                                                                  
	for(i=0;i<ROW;i++) {                                                      
		printf("strArr[%d]=%s\n", i, strArr[i]);                          
	}                                                                         
	puts("");                                                                 
                                                                                  
	// 배열 tmp를 이용해서, 첫 번째 행(strArr[0])과 두 번째 행(strArr[1])을 바꾼다.        
	strcpy(tmp, strArr[0]);                                                   
	strcpy(strArr[0], strArr[1]);                                             
	strcpy(strArr[1], tmp);                                                   
                                                                                  
	// 세 번째 행의 내용을 한 문자씩 변경한다.                                          
	strArr[2][0] = 'G';                                                       
	strArr[2][1] = 'G';                                                       
	strArr[2][2] = '\0';                                                      
                                                                                  
	for(i=0;i<ROW;i++)                                                        
		printf("strArr[%d]=%s\n", i, strArr[i]);                          
                                                                                  
	return 0;                                                                 
}                                                                                 
