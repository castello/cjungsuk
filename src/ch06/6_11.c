#include <stdio.h>                                            
						       
int factorial(int n) {                                       
	if(n==1) return 1;  // n의 값이 1이면, 1을 반환한다.           
							       
	return n * factorial(n-1); // 재귀 호출                     
}                                                             
						       
int main(void) {                                              
	int result = factorial(5);                               
							       
	printf("%d!=%d\n", n, result);                           
							       
	return 0;                                                
}                                                             
