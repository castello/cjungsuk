#include <stdio.h>                             
#include <string.h>                            
                                               
char* strinsert(char* dst, char* src, int n) { 
   /*                                          
        알맞은 코드를 넣으시오.                      
   */                                          
	return src;                               
}                                              
                                               
int main(void) {                               
	char str[10] = "abcd";                    
						
	printf("%s\n", strinsert("123", str, 1)); 
	printf("%s\n", strinsert("123", str, 2)); 
	printf("%s\n", strinsert("123", str, 3)); 
                                               
	return 0;                                 
}                                              
