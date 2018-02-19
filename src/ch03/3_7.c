#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	int a = 1000000;         // 1,000,000   1백만                        
	int b = 2000000;         // 2,000,000   2백만                        
                                                                            
	long long c = a * b;     // a * b = 2,000,000,000,000?              
                                                                            
	printf("c=%d\n", c);                                                
                                                                            
	return 0;                                                           
}                                                                           
