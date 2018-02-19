#include <stdio.h>                                                           
#include <stdlib.h>                                                          
#include <string.h>                                                          
                                                                             
void add(char* str);   // 문자열 배열(포인터 배열)에 문자열(str)을 추가하는 함수          
void printArr(void);                                                         
                                                                             
char* strArr[10];     // 문자열을 저장할 배열                                      
int   pos = 0;        // 문자열을 저장할 위치(배열 strArr의 index)                   
                                                                             
int main(void) {                                                             
	char input[50];   	// 사용자가 입력한 단어를 저장할 배열                    
                                                                             
	printf("저장할 단어를 입력하세요.(ENTER:종료)\n>");                             
                                                                             
	// 엔터를 입력하면 gets()의 결과는 빈 문자열이 되고, strlen()의 결과는 0이 된다.        
	while (strlen(gets(input))) {  // while(strlen(gets(input))!=0) {       
		add(input);                                                     
		printf(">");                                                    
	}                                                                       
                                                                             
	printf("\n입력하신 단어는 다음과 같습니다.\n");                                  
	printArr();                                                             
	return 0;                                                               
}                                                                            
                                                                             
void add(char* str) {                                                        
	// 문자열(str)을 저장할 메모리를 동적 할당받음.(널 문자 저장할 공간 포함)                
	char* tmp = malloc(sizeof(char)*(strlen(str)+1));                       
                                                                             
	strcpy(tmp, str);  // 사용자가 입력한 문자열을 동적 할당받은 메모리(tmp)에 복사       
	strArr[pos++] = tmp; // tmp(문자열의 주소)를 배열에 저장하고 pos의 값을 1 증가      
}                                                                            
                                                                             
void printArr(void) {                                                        
	int i;                                                                  
	printf("[");                                                            
                                                                             
	for (i=0;i<pos;i++)                                                     
		printf("%s, ", strArr[i]);                                      
	printf("]\n");                                                          
}                                                                            
