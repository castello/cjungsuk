#include <stdio.h>                                         
                                                           
int main(void) {                                           
	float  f 	= 0.1f;                            
	double d 	= 0.1;                             
	double d2	= (double)f;                       
                                                           
	printf("10.0==10.0f ? %d\n", 10.0==10.0f);         
	printf("0.1==0.1f ? %d\n", 0.1==0.1f);             
	printf("f =%19.17f\n", f);                         
	printf("d =%19.17f\n", d);                         
	printf("d2=%19.17f\n", d2);                        
	printf("d==f  ? %d\n", d==f);                      
	printf("d==d2 ? %d\n", d==d2);                     
	printf("d2==f ? %d\n", d2==f);                     
	printf("(float)d==f ? %d\n", (float)d==f);         
                                                           
	return 0;                                          
}                                                          
