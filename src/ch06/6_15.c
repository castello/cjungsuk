#include <stdio.h>                                                                   
                                                                                     
int x; // 전역 변수. 함수 밖에 선언                                                        
                                                                                     
void func1(void) {                                                                   
	int y;  // 지역 변수. 함수 안에 선언                                                  
	x = 1;  // OK                                                                   
	y = 2;  // OK                                                                   
//	z = 3;  // 에러                                                                  
//	x2 = 4; // 에러. 컴파일러는 변수 x2에 대한 정보가 아직 없음.                                
                                                                                     
	printf("func1() x=%d\n", x);                                                    
	printf("func1() y=%d\n", y);                                                    
//	printf("func1() z=%d\n", z);   // 에러.                                          
}                                                                                    
                                                                                     
int x2; // 전역변수. 함수 밖에 선언                                                        
                                                                                     
void func2(void) {                                                                   
	int z; // 지역 변수. 함수 안에 선언                                                   
	x  = 10; // OK                                                                  
//	y  = 20; // 에러. 유효하지 않은 변수                                                  
	z  = 30; // OK                                                                  
	x2 = 40; // OK. 변수 x2에 대한 정보를 알고 있음.                                        
                                                                                     
	printf("func2() x=%d\n", x);                                                    
//	printf("func2() y=%d\n", y);   // 에러. 유효하지 않은 변수                            
	printf("func2() z=%d\n", z);                                                    
	printf("func2() x2=%d\n", x2);                                                  
}                                                                                    
                                                                                     
int main(void) {                                                                     
	func1();                                                                        
	func2();                                                                        
	return 0;                                                                       
}                                                                                    
