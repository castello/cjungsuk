#include <stdio.h>                                                         
                                                                           
int   myStrlen(char* str);                  // 문자열의 길이를 반환              
char* myStrcpy(char* dst, const char* src); // 문자열을 복사                   
char* myStrcat(char* dst, const char* src); // 두 문자열을 연결                
                                                                           
int main(void) {                                                           
	char* src = "abc";                                                    
	char  dst[8] = {0};                                                   
                                                                           
	printf("str=%s, myStrlen(src)=%d\n", src, myStrlen(src));             
	printf("dst=%s, myStrlen(dst)=%d\n", dst, myStrlen(dst));             
	printf("dst=%s\n", myStrcpy(dst, src));                               
	printf("dst=%s\n", myStrcat(dst, "123"));                             
	return 0;                                                             
}                                                                          
                                                                           
int myStrlen(char* str) {                                                  
	char* p;                                                              
                                                                           
	for (p=str;*p;p++); // for (p = str; *p!='\0'; p++);                  
                                                                           
	return p - str;                                                       
}                                                                          
                                                                           
char* myStrcat(char* dst, const char* src) {                               
	myStrcpy(dst + myStrlen(dst), src);                                   
                                                                           
	return dst;                                                           
}                                                                          
                                                                           
char* myStrcpy(char* dst, const char* src) {                               
	char* p = dst;                                                        
                                                                           
	while (*src) {    // while (*src!='\0') {                             
		*dst = *src;  	// *src를 *dst에 복사                            
		src++;                                                        
		dst++;                                                        
	}                                                                     
                                                                           
	return p;                                                             
}                                                                          
