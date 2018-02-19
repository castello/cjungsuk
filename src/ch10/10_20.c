#include <stdio.h>                                                               
#include <string.h>                                                              
                                                                                 
int main(void) {                                                                 
	char* str    = "abc999xyz3456oo2z";                                         
	char* numStr = "0123456789";                                                
	int cnt = 0;                                                                
                                                                                 
	printf("str=%s\n", str);                                                    
                                                                                 
	while (str && *str) {   // while(str!=NULL && *str!='\0') {                 
		str = strpbrk(str, numStr); // str에 포함된 첫 번째 숫자의 주소를 반환       
                                                                                 
		if (str) { // if(str!=NULL)) { // str이 NULL이 아니면,                 
			cnt++;                                                      
			str += strspn(str, numStr); // 숫자의 길이만큼 str을 증가시킨다.    
		}                                                                   
	}                                                                           
                                                                                 
	printf("cnt=%d\n", cnt);                                                    
	return 0;                                                                   
}                                                                                
