#include <stdio.h>                                                               
                                                                                 
int add(int x, int y) {                                                          
	int result = x + y;                                                      
	printf("add(%d, %d)이 호출되었습니다.\n", x, y);                              
	return result;                                                           
}

int mul(int x, int y) {                                                          
	int result = x * y;                                                      
	printf("mul(%d, %d)이 호출되었습니다.\n", x, y);                              
	return result;                                                           
}                                                                                
                                                                                 
int main(void) {                                                                 
	printf("main() - add(3,5)=%d, mul(3,5)=%d\n", add(3,5), mul(3,5));       
                                                                                 
	return 0;                                                                
}                                                                                
