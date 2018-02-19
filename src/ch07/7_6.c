#include <stdio.h>                                     
                                                       
int main(void) {                                       
 	float f  = 12.625f;                               
 	float*   	pf	=	&f;               
 	unsigned*	pu	=	(unsigned*)pf;    
                                                       
 	printf("f=%f\n",     f);                          
 	printf("pf=%p\n",   pf);                          
 	printf("pu=%p\n",   pu);                          
 	printf("*pf=%f\n", *pf);                          
 	printf("*pu=%X\n", *pu);                          
                                                       
 	return 0;                                         
}                                                      
                                                       
