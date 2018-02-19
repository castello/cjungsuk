#include <stdio.h>                                           
                                                             
int add(int, int);                                           
                                                             
	int main(void) {                                        
	int (*pf)(int, int) = add;                              
                                                             
	int x = 5, y = 3;                                       
                                                             
	printf("add=%p\n", add);                                
	printf("pf =%p\n", pf);                                 
	printf("*pf=%p\n", *pf);                                
                                                             
	printf("add(%d, %d) = %d\n",   x, y, add(x, y));        
	printf("pf(%d, %d) = %d\n",    x, y, pf(x, y));         
	printf("(*pf)(%d, %d) = %d\n", x, y, (*pf)(x, y));      
                                                             
	return 0;                                               
}                                                            
                                                             
int add(int a, int b) {                                      
	return a + b;                                           
}                                                            
