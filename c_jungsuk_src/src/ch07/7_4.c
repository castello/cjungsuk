#include <stdio.h>                                               
                                                                 
int main(void) {                                                 
	char   ch;                                                  
 	int    i;                                                   
 	float  f;                                                   
 	double d;                                                   
                                                                 
 	char*   pch = &ch;                                          
 	int*    pi  = &i;                                           
 	float*  pf  = &f;                                           
 	double* pd  = &d;                                           
                                                                 
 	printf("sizeof(pch) =%d\n", sizeof(pch));                   
 	printf("sizeof(pi)  =%d\n", sizeof(pi));                    
 	printf("sizeof(pf)  =%d\n", sizeof(pf));                    
 	printf("sizeof(pd)  =%d\n", sizeof(pd));                    
 	puts("");                                                   
 	printf("sizeof(*pch)=%d\n", sizeof(*pch));                  
 	printf("sizeof(*pi) =%d\n", sizeof(*pi));                   
 	printf("sizeof(*pf) =%d\n", sizeof(*pf));                   
 	printf("sizeof(*pd) =%d\n", sizeof(*pd));                   
                                                                 
 	return 0;                                                   
}                                                                
                                                                 
