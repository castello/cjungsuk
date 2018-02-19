#include <stdio.h>                                                    
                                                                      
int divide(int x, int y) {                                            
	if (y == 0) return 0; // 이 문장을 주석처리하면 비정상 종료된다.         
                                                                      
	return x / y;                                                 
}                                                                     
                                                                      
int main(void) {                                                      
	int x = 4, y = 2;                                             
                                                                      
	printf("%d/%d=%d\n", x, y, divide(x, y));                     
                                                                      
	y = 0;                                                        
	printf("%d/%d=%d\n", x, y, divide(x, y));                     
	return 0;                                                     
}                                                                     
