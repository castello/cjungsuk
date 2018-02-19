#include <stdio.h>                                               
                                                                 
int main(void) {                                                 
	long long a = 1000000 * 1000000;                         
	long long b = 1000000 * 1000000LL;  // long longÇü »ó¼ö    
                                                                 
	printf("a=%lld\n", a);                                   
	printf("b=%lld\n", b);                                   
                                                                 
	return 0;                                                
}                                                                
