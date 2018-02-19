#include <stdio.h>                                                       
                                                                         
void changeX(char** px) {                                                
	*px = "ZZZ";   // 문자열 상수 "ZZZ"의 주소를 포인터 *px(main함수의 x)에 저장   
}                                                                        
                                                                         
int main(void) {                                                         
	char* x = "AAA";                                                    
                                                                         
	printf("x=%s\n", x);                                                
	changeX(&x);	// 포인터 x의 주소를 넘겨준다.	                            
	printf("x=%s\n", x);                                                
                                                                         
	return 0;                                                           
}                                                                        
