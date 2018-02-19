#include <stdio.h>                                                
#include <string.h>                                               
                                                                  
int main(void) {                                                  
	char str[] = "Hello";                                     
	int LEN = sizeof(str) / sizeof(str[0]);                   
	int i;                                                    
                                                                  
	printf("%s\n", str);    // Hello                          
                                                                  
	strcpy(str, "12345");  // char배열 str에 "12345"를 복사       
	printf("%s\n", str);   // 12345                           
                                                                  
	str[2] = '\0';          // 세 번째 문자를 널 문자로 변경          
	printf("%s\n", str);   // 12                              
                                                                  
	for(i=0;i<LEN;i++)                                        
		printf("str[%d]=%c, %d\n", i, str[i], str[i]);    
                                                                  
	return 0;                                                 
}                                                                 
