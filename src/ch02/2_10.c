#include <stdio.h>                                                    
#include <limits.h>   // INT_MIN, INT_MAX등을 사용하기 위해 포함            
                                                                      
int main(void) {                                                  
	printf("short: %d~%d\n", SHRT_MIN, SHRT_MAX);                 
	printf("int  : %d~%d\n", INT_MIN, INT_MAX);                   
	printf("long : %d~%d\n", LONG_MIN, LONG_MAX);                 
	printf("long long: %lld~%lld\n", LLONG_MIN, LLONG_MAX);       
	printf("\n");                                                 
	printf("unsigned short: 0~%u\n", USHRT_MAX);                  
	printf("unsigned int  : 0~%u\n", UINT_MAX);                   
	printf("unsigned long : 0~%u\n", ULONG_MAX);                  
	printf("unsigned long long: 0~%llu\n", ULLONG_MAX);           
                                                                      
	return 0;                                                     
}	                                                              
