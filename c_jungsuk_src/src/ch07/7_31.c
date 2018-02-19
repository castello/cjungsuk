#include <stdio.h>                                                     
#include <string.h>                                                    
                                                                       
int main(void) {                                                       
	char* strArr[] = { "ABC", "abc", "123", "2", "aa", "AAA", "111",  
                                                   "CCC", "AAB"};      
                                                                       
	const int LEN = sizeof(strArr) / sizeof(strArr[0]);               
	int i, j;                                                         
	char *tmp;                                                        
                                                                       
	printf("[");                                                      
	for(i=0;i<LEN;i++) {                                              
		printf("%s,", strArr[i]);                                 
	}                                                                 
	printf("]\n");                                                    
                                                                       
	for(i=0;i<LEN-1;i++) {                                            
		for(j=0;j<LEN-i-1;j++) {                                  
			if(strcmp(strArr[j], strArr[j+1]) < 0) {          
				tmp = strArr[j];                          
				strArr[j]=strArr[j+1];                    
				strArr[j+1] = tmp;                        
			}                                                 
		}                                                         
	}                                                                 
                                                                       
	printf("[");                                                      
	for(i=0;i<LEN;i++) {                                              
		printf("%s,", strArr[i]);                                 
	}                                                                 
	printf("]\n");                                                    
                                                                       
	return 0;                                                         
}                                                                      
