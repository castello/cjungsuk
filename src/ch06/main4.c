#include <stdio.h>                                                             
                                                                               
int gv = 100;   // 정의적 선언. extern을 붙일 수 있는 경우도 있으나 붙이지 않는 것이 원칙      
                                                                               
void   gfunc(void);    // 전역 함수의 선언. extern이 생략됨. sub4.c에 정의되어 있음       
static void sfunc(void); // 정적 함수의 선언. 소스파일(main4.c)내에서만 사용가능           
                                                                               
extern int main(void) {                                                        
		gfunc(); // sub4.c의 gfunc()를 호출                                  
		sfunc(); // main4.c의 sfunc()를 호출                                 
		return 0;                                                         
}                                                                              
                                                                               
static void sfunc(void) { // 정적 함수의 정의. 소스파일(main4 .c)내에서만 사용가능         
		printf("sfunc() - main4.c\n");                                    
}                                                                              
                                                                               
