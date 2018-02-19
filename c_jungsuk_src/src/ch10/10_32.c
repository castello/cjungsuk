#include <stdio.h>                                    
                                                      
#define DEBUG                                         
#define print_int(x)    printf(#x"=%d\n", x)          
                                                      
#if 1      //  1을 0으로 바꾸면 #if~#else구간이 주석처리 된다. 
int main(void) {                                      
	int x = 10;                                      
                                                      
#ifdef DEBUG    // #if defined(DEBUG)                 
	print_int(x);                                    
#endif                                                
                                                      
	return 0;                                        
}                                                     
#else                                                 
int main(void) {                                      
	printf("Hello, world.\n");                       
	return 0;                                        
}                                                     
#endif                                                
