#include <stdio.h>                                                
#define LEN 10                                                    
                                                                  
int main(void) {                                                  
	char str[LEN+1];  // 최대 길이가 10인 문자열 저장가능             
	int i;                                                    
                                                                  
	printf("길이가 %d 이하인 문자열을 입력하세요.>", LEN);             
	gets(str);                                                
                                                                  
	printf("str=");                                           
	puts(str);  // 문자열을 출력하고 줄바꿈을 한다.                    
                                                                  
	for(i=0;i<LEN+1;i++)                                      
		printf("str[%d]=%c, %d\n", i, str[i], str[i]);    
                                                                  
	return 0;                                                 
}                                                                 
