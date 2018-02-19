#include <stdio.h>                                                        
                                                                          
int main(void) {                                                          
	int    i = 100;                                                      
	                                                                     
	int*  pi  = &i;           // 변수 i를 가리키는 포인터                      
	int** ppi = &pi;          // 포인터 pi를 가리키는 포인터(포인터의 포인터)       
	int*  pi2 = (int*)&pi;    // pi의 값을 pi2에 저장한다.                    
                                                                          
	printf(" i  =%d\n", i);                                              
	printf("&i  =%p\n", &i);                                             
	printf("pi  =%p\n", pi);                                             
	printf("&pi =%p\n", &pi);                                            
	printf("ppi =%p\n", ppi);                                            
	printf("*ppi=%p\n", *ppi);                                           
	printf("**ppi=%d\n", **ppi);                                         
	printf("pi2 =%p\n", pi2);                                            
	printf("*pi2=%p\n", *pi2);                                           
	printf("**(int**)pi2=%d\n", **(int**)pi2);                           
	printf("sizeof(pi)=%d\n", sizeof(pi));                               
	printf("sizeof(ppi)=%d\n", sizeof(ppi));                             
                                                                          
	return 0;                                                            
}                                                                         
