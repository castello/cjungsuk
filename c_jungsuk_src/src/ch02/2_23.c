#include <stdio.h>                                                            
                                                                              
int main(void) {                                                              
	int    i = 91234567; 		// 8자리의 10진수                                
	float  f	= (float)i; 	// int를 float로 형변환                  
	int   i2	= (int)f; 	   	// float를 다시 int로 형변환      
                                                                              
	double d	= (double)i; 	// int를 double로 형변환                 
	int   i3	= (int)d;     	// double을 다시 int로 형변환             
                                                                              
	float f2	= 1.666f;                                                     
	int   i4	= (int)f2;                                            
                                                                              
	printf("i=%d\n", i);                                                          
	printf("f=%f i2=%d\n", f,  i2);                                       
	printf("d=%f i3=%d\n", d,  i3);                                       
	printf("(int)%f=%d\n", f2, i4);                                       
	return 0;                                                             
}                                                                             
