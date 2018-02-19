#include <stdio.h>                                                     
                                                                       
#define LEN 51                                                         
                                                                       
int main(void) {                                                       
	char str[LEN];       // 입력받은 문자열을 저장할 배열                  
	char result[LEN];    // 결과를 저장할 배열                          
                                                                       
	int i;                                                         
	int pos = 0;         // 배열 result에 저장할 위치                   
                                                                       
	printf("%d자 이하의 내용을 입력하세요.>", LEN-1);                      
	scanf("%s", str);                                              
                                                                       
	for(i=0;str[i];i++) {                                          
		// 문자가 숫자 또는 ','인 경우만 배열 result에 저장한다.          
		if(('0' <= str[i] && str[i] <= '9') || str[i]==',') {  
			result[pos++] = str[i];                        
		}                                                      
	}                                                              
                                                                       
	result[pos] = '\0';  // 마지막에 널 문자를 넣는 것을 잊지 말자.          
                                                                       
	printf("str=%s\n",    str);                                    
	printf("result=%s\n", result);                                 
                                                                       
	return 0;                                                      
}                                                                      
