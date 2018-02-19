#include <stdio.h>                                                           
#include <string.h>                                                          
#include <stdlib.h>                                                          
                                                                             
char* strReplace(char* src, char* old, char* new);                           
                                                                             
int main(void) {                                                             
	char* src = "aabbccbbaa";                                               
                                                                             
	printf("src   =%s\n", src);                                             
	printf("result=%s\n", strReplace(src, "bb", "111"));                    
	printf("result=%s\n", strReplace(src, "cc", ""));                       
	printf("result=%s\n", strReplace(src, "ff", "00"));                     
	                                                                        
	return 0;                                                               
}                                                                            
                                                                             
char* strReplace(char* src, char* old, char* new) {                          
	char* dst = (char*)calloc(strlen(src) * 2,  sizeof(char));              
	char* sp = src;   // 검색을 시작할 위치                                      
	char* dp = dst;   // dst에 복사할 위치                                      
	char* pos = NULL; // old가 발견된 곳의 주소를 저장할 변수                        
                                                                             
	if(src==NULL || old==NULL || new==NULL)                                 
		return src;                                                     
                                                                             
	while(pos=strstr(sp, old)) {                                            
		strncpy(dp, sp, pos - sp);  // 일치한 위치 이전까지의 내용을 dst에 복사   
		strcat(dp, new);            // 치환할 내용(new)을 dst에 복사          
		sp = pos + strlen(old);     // sp를 이동                          
		dp += strlen(dp);           // dp를 이동                          
	}                                                                       
                                                                             
	strcat(dp, sp); // 나머지 내용을 dst로 복사한다.                               
                                                                             
	return dst;                                                             
}                                                                            
                                                                             
