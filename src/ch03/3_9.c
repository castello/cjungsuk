#include <stdio.h>                                                        
                                                                          
int main(void) {                                                          
	int a = 1000000;                                                  
                                                                          
	int result1 = a * a / a;   // 1000000 * 1000000 / 1000000         
	int result2 = a / a * a;   // 1000000 / 1000000 * 1000000         
                                                                          
    printf("%d * %d / %d = %d\n", a, a, a, result1);                      
    printf("%d / %d * %d = %d\n", a, a, a, result2);                      
                                                                          
	return 0;                                                         
}                                                                         
