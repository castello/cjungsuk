#include <stdio.h>                                                     
#include <string.h>                                                    
                                                                       
int main(void) {                                                       
	char str[] = "cat, dog, tiger, lion, elephant, blue whale";       
	char* delimiter = ", ";  // 두 개의 문자, 쉼표','와 공백' '을 구분자로 지정  
	char* token;                                                      
                                                                       
 	printf("str=%s\n", str);                                          
                                                                       
	token = strtok(str, delimiter);                                   
                                                                       
	while (token) {                                                   
		printf("%s\n", token);                                    
		token = strtok(NULL, delimiter);                          
	}                                                                 
                                                                       
	return 0;                                                         
}                                                                      
