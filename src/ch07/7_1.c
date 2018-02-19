#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	int  i = 5;                                                    
	int* p = &i;                                                   
                                                                    
	printf("i =%d\n",  i);   // 변수 i에 저장된 값을 출력                
	printf("&i=%p\n", &i);   // 변수 i의 주소를 출력                    
	printf("p =%p\n",  p);   // 포인터 p에 저장된 값(주소)을 출력          
	printf("&p=%p\n", &p);   // 포인터 p의 주소를 출력                   
                                                                    
	return 0;                                                      
}                                                                   
