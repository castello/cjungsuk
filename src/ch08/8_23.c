#include <stdio.h>                                                           
#include <stdlib.h>                                                          
#include <string.h>                                                          
                                                                             
void add(char* str);                                                         
void printArr(void);                                                         
                                                                             
char** strArr;     // 문자열 배열(char*[])의 포인터                                
int   len = 2;     // 문자열 배열의 길이                                          
int   pos = 0;     // 문자열을 저장할 위치(index)                                  
                                                                             
                                                                             
int main(void) {                                                             
	char input[50]; // 사용자가 입력한 단어를 임시로 저장할 배열                       
	int  i;                                                                 
                                                                             
	strArr = malloc(sizeof(char*)*len);  // 문자열을 저장할 배열을 할당받음          
                                                                             
	printf("저장할 단어를 입력하세요.(ENTER:종료)\n");                              
	printf(">");                                                            
                                                                             
	while (strlen(gets(input))) {  // while(strlen(gets(input))!=0) {       
		add(input);                                                     
		printf(">");                                                    
	}                                                                       
                                                                             
	// 배열의 각 요소가 가리키는 메모리를 먼저 해제                                     
	for (i=0;i<pos;i++) {                                                   
		free(strArr[i]);                                                
		}                                                               
                                                                             
	free(strArr); // 배열의 메모리를 해제                                         
                                                                             
	return 0;                                                               
}                                                                            
                                                                             
void add(char* str) {                                                        
	char* tmp = malloc(sizeof(char)*(strlen(str)+1)); // 널 문자를 저장할 공간    
                                                                             
	if (pos >= len) {                                               
		// 기존 배열 보다 두 배 큰 배열을 재할당받음.                              
		strArr = realloc(strArr, sizeof(char*)*len*2);                  
		len *= 2;  // 길이를 두배로.                                        
	}                                                                       
																		 
	strcpy(tmp, str);                                                       
	strArr[pos++] = tmp;                                            
																		 
	printArr();                                                     
}                                                                       
                                                                             
void printArr(void) {                                                        
	int i;                                                                  
                                                                             
	printf("strArr=%p [", strArr);                                          
                                                                             
	for (i=0;i<pos;i++)                                                     
		printf("%s, ", strArr[i]);                                      
                                                                             
		printf("] len=%d\n", len);                                      
}                                                                            
