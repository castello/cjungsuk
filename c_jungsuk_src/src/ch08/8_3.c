#include <stdio.h>                                
                                                  
void changeX(char* x) {  // 매개변수의 타입이 포인터     
	x = "ZZZ";                                   
}                                                 
                                                  
int main(void) {                                  
	char* x = "AAA";                             
                                                  
	printf("x=%s\n", x);                         
	changeX(x);	  // 포인터 x의 값(주소)을 넘겨준다.
	printf("x=%s\n", x);                         
                                                  
	return 0;                                    
}                                                 
