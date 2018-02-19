#include <stdio.h>                                                                        
#include <float.h>   // FLT_MIN, FLT_MAX등을 사용하기 위해 추가                                 
                                                                                          
int main(void) {                                                                          
	float  f        = 9.12345678901234567890;                                         
	float  f2       = 1.2345678901234567890;                                          
	double d        = 9.12345678901234567890;                                         
	long double ld  = 9.12345678901234567890;                                         
                                                                                          
	printf("     1.2345678901234567890\n");                                           
 	printf("f  : %f\n", f);      // 소수점 이하 6자리까지 출력.(7자리에서 반올림)                
 	printf("f  : %24.20f\n", f);                                                      
	printf("f2 : %24.20f\n", f2);                                                     
	printf("d  : %24.20f\n", d);                                                      
	printf("ld : %24.20Lf\n", ld);                                                    
                                                                                          
	printf("\n");                                                                     
	printf("float       : %e ~ %e\n", FLT_MIN,  FLT_MAX);                             
	printf("double      : %e ~ %e\n", DBL_MIN,  DBL_MAX);                             
	printf("long double : %e ~ %e\n", LDBL_MIN, LDBL_MAX);                            
                                                                                          
	return 0;                                                                         
}	                                                                                  
