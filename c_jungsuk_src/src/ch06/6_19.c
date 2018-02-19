#include <stdio.h>                                                                    
                                                                                      
static int sv;       	// 정적 변수 - 함수 밖에 선언. 유효범위는 소스파일 전체               
                                                                                      
void func1() {                                                                        
	static 	int sv2 = 1;  // 정적 변수 - 함수 안에 선언. 유효범위는 함수 내부                    
		   	int lv  = 1;	// 지역 변수                                        
                                                                                      
	printf("func1() - sv2=%d, lv=%d\n", sv2++, lv++);                                
}                                                                                     
                                                                                      
void func2() {                                                                        
	sv = 100;                                                                        
	printf("func2() - sv =%d\n", sv);                                                
//	printf("func2() - sv2=%d\n", sv2); // 에러. 정적 변수 sv2가 유효하지 않음.               
}                                                                                     
                                                                                      
int main(void) {                                                                      
	func1();                                                                         
	func1();                                                                         
	func1();                                                                         
	func2();                                                                         
                                                                                      
	return 0;                                                                        
}                                                                                     
