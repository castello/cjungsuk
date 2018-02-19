#include <stdio.h>                                                                     
#include <stdlib.h>  // qsort()                                                        
#include <string.h>  // strcmp()                                                       
                                                                                       
int compareStr(const void* v1, const void* v2);                                        
int compareInt(const void* v1, const void* v2);                                        
void printStrArr(char** strArr, int len);                                              
void printIntArr(int* intArr,   int len);                                              
                                                                                       
int main(void) {                                                                       
	int   intArr[] = { 9,1,6,3,5,1,2,5,2,6,4,7,7,8,4 };                               
	char* strArr[] = { "bird", "tiger", "cat", "dog", "lion", "mouse" };              
                                                                                       
	int iLen = sizeof(intArr) / sizeof(int);                                          
	int sLen = sizeof(strArr) / sizeof(char*);                                        
                                                                                       
	printIntArr(intArr, iLen);                                                        
	printStrArr(strArr, sLen);                                                        
                                                                                       
	qsort(intArr, iLen, sizeof(int),   compareInt);                                   
	qsort(strArr, sLen, sizeof(char*), compareStr);                                   
                                                                                       
	printf("\n= Á¤·Ä ÈÄ =\n");                                                          
	printIntArr(intArr, iLen);                                                        
	printStrArr(strArr, sLen);                                                        
                                                                                       
	return 0;                                                                         
}                                                                                      
                                                                                       
int compareInt(const void* v1, const void* v2) {                                       
	int i1 = *(int*)v1;                                                               
	int i2 = *(int*)v2;                                                               
                                                                                       
	return i1 - i2;                                                                   
}                                                                                      
                                                                                       
int compareStr(const void* v1, const void* v2) {                                       
	char* s1 = *(char**)v1;                                                           
	char* s2 = *(char**)v2;                                                           
                                                                                       
	return strcmp(s1, s2);                                                            
}                                                                                      
                                                                                       
void printStrArr(char** strArr, int len) {                                             
	int i;                                                                            
                                                                                       
	printf("[");                                                                      
	for (i=0;i<len;i++)                                                               
		printf("%s, ", strArr[i]);                                                
	printf("]\n");                                                                    
}                                                                                      
                                                                                       
void printIntArr(int* intArr, int len) {                                               
	int i;                                                                            
                                                                                       
	printf("[");                                                                      
	for (i=0;i<len;i++)                                                               
		printf("%d, ", intArr[i]);                                                
	printf("]\n");                                                                    
}                                                                                      
