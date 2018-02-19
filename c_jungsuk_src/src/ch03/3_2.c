#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int i, j;                                                  
	short s;                                                   
                                                                   
	i = -10;                                                   
	i = +i;                                                    
	printf("i=%d\n",i);                                        
                                                                   
	j = -10;                                                   
	j = -j;                                                    
	printf("j=%d\n",j);                                        
                                                                   
	s = 10;                                                    
	printf("s=%d,  sizeof(s)=%d\n",   s, sizeof(s));           
	printf("+s=%d, sizeof(+s)=%d\n", +s, sizeof(+s));          
                                                                   
	return 0;                                                  
}                                                                  
