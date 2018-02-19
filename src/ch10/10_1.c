#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int ch;                                                       
                                                                   
	do {                                                          
		printf("문자 하나를 입력해주세요.(종료:x)>");                 
		ch = getchar();                                       
                                                                   
		printf("입력하신 문자는 '%c'입니다.\n", ch);                
                                                                   
		while (getchar() != '\n'); // 입력 버퍼를 비운다.          
	} while(ch!='x' && ch!='X');  	// 'x'또는 'X'를 입력하면 반복 종료  
                                                                   
	printf("'%c'를 입력하셔서 종료되었습니다.\n", ch);                    
                                                                   
	return 0;                                                     
}                                                                  
