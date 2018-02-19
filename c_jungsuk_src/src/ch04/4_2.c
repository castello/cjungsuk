#include <stdio.h>                                                                        
                                                                                          
int main(void) {                                                                          
	int input;                                                                        
	                                                                                  
                                                                                          
	printf("숫자를 하나 입력하세요.>");                                                     
	scanf("%d", &input);                                                              
                                                                                          
	if(input==0) {                                                                    
		printf("입력하신 숫자는 0입니다.\n");	                                          
	}                                                                                 
                                                                                          
	if(input!=0)                                                                      
		printf("입력하신 숫자는 0이 아닙니다.\n");		                          
		printf("입력하신 숫자는 %d입니다.\n", input);  // if문에 속한 문장이 아님             
                                                                                          
	return 0;                                                                         
}                                                                                         
                                                                                          
