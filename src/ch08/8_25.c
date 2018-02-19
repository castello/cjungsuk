#include <stdio.h>                                             
                                                               
	int add(int a, int b) {                                   
	return a + b;                                             
}                                                              
                                                               
int main(void) {                                               
	int (*pf)(void) = (int(*)(void))add;  // 형변환 생략가능      
	int result = pf(); // 함수 포인터 pf의 타입과 호출형식이 일치       
                                                               
		printf("result=%d\n", result);                    
                                                               
	return 0;                                                 
}                                                              
