#include <stdio.h>                                                      
#include <string.h>                                                     
                                                                        
int strCount(char* src, char* key); // src에 key가 몇 번 나타나는지 세어서 반환  
                                                                        
int main(void) {                                                        
	char* src = "aabbccaabbcc";                                        
	char* key = "bc";                                                  
                                                                        
	printf("src=%s\n", src);                                           
	printf("key=%s\n", key);                                           
	printf("cnt=%d\n", strCount(src, key));                            
                                                                        
	return 0;                                                          
}                                                                       
                                                                        
int strCount(char* src, char* key) {                                    
	int cnt = 0;                                                       
	int len = 0;                                                       
                                                                        
	if (src == NULL || key == NULL) return 0;                          
                                                                        
	len = strlen(key);                                                 
                                                                        
	while (src = strstr(src, key)) {                                   
		cnt++;                                                     
		src += len; // key의 길이만큼 src의 값을 증가시킨다.               
	}                                                                  
                                                                        
	return cnt;                                                        
}                                                                       
