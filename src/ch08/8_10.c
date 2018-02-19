#include <stdio.h>                                                 
                                                                   
char* getUserInput(char* input) {                                  
	printf("단어를 하나 입력하세요.>");                                     
	scanf("%s", input);                                               
                                                                   
	return input;                                                     
}                                                                  
                                                                   
int main(void) {                                                   
	char input[20];                                                   
	char* str = getUserInput(input);  // 매개변수를 통해 배열을 전달          
                                                                   
	printf("입력받은 단어:%s\n", str);                                    
	return 0;                                                         
}                                                                  
