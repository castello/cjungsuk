#include <stdio.h>                                                          
                                                                            
extern int gv;   // 전역 변수의 참조적 선언. 초기화하지 않는다.                        
                                                                            
void printGv(void) {                                                        
		printf("printGv() - gv=%d\n", gv); // 전역 변수의 값을 출력         
}		                                                              
