#include <stdio.h>                                                                      
#include <conio.h>                                                                      
#include <ctype.h>                                                                      
                                                                                        
int main(void) {                                                                        
	char input[50] = {0}; // 입력을 저장할 배열                                             
	int pos = 0;                                                                       
	int ch;                                                                            
                                                                                        
	printf("숫자만 입력하세요. >");                                                         
	                                                                                   
	while(1) {                                                                         
		ch = getch();                                                              
                                                                                        
		if(ch=='\r') {   // '\r'==13   엔터를 입력하면 13이 저장됨                        
			puts("");    // new line                                           
			break;                                                             
		}                                                                          
                                                                                        
		if('1'<=ch && ch<='9') {                                                   
			putch(ch);                                                         
			input[pos++] = ch;                                                 
		} else if(ch=='\b' && pos!=0) {  // backspace를 눌렀을 때                     
          // 마지막 글자를 지운다. backspace, 공백, backspace를 연속으로 출력                      
			putch('\b');  //  '\b'==8                                          
			putch(' ');                                                        
			putch('\b');                                                       
			input[--pos] = '\0'; // 마지막 문자를 널 문자로 변경                       
		}                                                                          
	}                                                                                  
                                                                                        
	printf("input:%s\n", input);                                                       
	return 0;                                                                          
}                                                                                       
