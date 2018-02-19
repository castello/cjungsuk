#include <stdio.h>                                                           
#include <stdlib.h>                                                          
#include <string.h>  // strlen(), memcpy()                                   
                                                                             
// 지정된 문자열(str)의 일부를 반환하는 함수                                           
char* mySubstr(char* src, int fr, int to) { // fr <= x < to                  
	char* newStr;                                                           
	int   len, diff = to - fr;                                              
                                                                             
	if(src==NULL) return src;                                               
                                                                             
	len = strlen(src);                                                      
                                                                             
	if (fr > to || to > len || fr < 0) return NULL;                         
                                                                             
	// 문자열의 일부를 저장할 공간을 할당받음.(널 문자'\0'가 저장될 공간도 필요)              
	newStr = (char*)malloc(sizeof(char) * (diff + 1));                      
                                                                             
	memcpy(newStr, src + fr, diff); // src+fr부터 diff개의 문자를 newStr에 복사   
	*(newStr + diff) = '\0';  		// 끝에 널 문자 저장                
                                                                             
	return newStr;                                                          
}                                                                            
                                                                             
int main(void) {                                                             
	char str[] = "0123456789";                                              
	printf("str=%s\n", str);                                                
	printf("mySubstr(str, 3, 6)=%s\n",  mySubstr(str, 3, 6));               
	printf("mySubstr(str, 5, 10)=%s\n", mySubstr(str, 5, 10));              
	printf("mySubstr(str, 6, 6)=%s\n",  mySubstr(str, 6, 6));               
	printf("mySubstr(str, 0, 11)=%s\n", mySubstr(str, 0, 11));              
	printf("mySubstr(str, 7, 5)=%s\n",  mySubstr(str, 7, 5));               
	printf("mySubstr(str,-1, 5)=%s\n",  mySubstr(str, -1, 5));              
	return 0;                                                               
}                                                                            
