#include <stdio.h>                                                                     
                                                                                       
#define LEN 51                                                                         
                                                                                       
int main(void) {                                                                       
	char str[LEN];                                                                 
                                                                                       
	int i, diff;                                                                   
                                                                                       
	printf("%d자 이하의 영문자를 입력하세요.>", LEN-1);                                    
	scanf("%s", str);                                                              
                                                                                       
	printf("input=%s\n", str);                                                     
                                                                                       
	diff   = 'a' -'A'; // 대문자와 소문자의 코드값의 차이를 구한다.                           
                                                                                       
	for(i=0;str[i];i++) {     // for(i=0;str[i]!='\0';i++) {                       
		if('A' <= str[i] && str[i] <= 'Z') {                                   
			str[i] += diff;                                                
		} else if('a' <= str[i] && str[i] <= 'z') {                            
			str[i] -= diff;                                                
		}                                                                      
	}                                                                              
                                                                                       
	printf("result=%s\n",str);                                                     
                                                                                       
	return 0;                                                                      
}                                                                                      
