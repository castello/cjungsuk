#include <stdio.h>                               
                                                 
int gv = 100; // 전역 변수의 정의적 선언. 초기화해야 한다.  
                                                 
void printGv(void);                              
                                                 
int main(void) {                                 
	printf("main() - gv=%d\n", gv);             
	printGv();                                  
                                                 
	return 0;                                   
}                                                
