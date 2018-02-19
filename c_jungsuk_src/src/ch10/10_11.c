#include <stdio.h>                                                           
#include <math.h>                                                            
                                                                             
void printResult(double d) {                                                 
	printf("ceil(%3.1f) =%3.1f   ",	d,	ceil(d)); 	// 올림          
	printf("floor(%3.1f)=%3.1f   ",	d,	floor(d));	// 버림          
	printf("round(%3.1f)=%3.1f   ",	d,	round(d));	// 반올림         
	printf("trunc(%3.1f)=%3.1f\n", 	d,	trunc(d));	// 소수점 이하 제거 
}                                                                            
                                                                             
double roundn(double d, int n) {  // d를 소수점 n째자리에서 반올림                   
	return round(d * pow(10, n - 1)) / pow(10, n - 1);                      
}                                                                            
                                                                             
int main(void) {                                                             
	printResult(1.4);                                                       
	printResult(1.5);                                                       
	printResult(1.6);                                                       
	printResult(-1.4);                                                      
	printResult(-1.5);                                                      
	printResult(-1.6);                                                      
                                                                             
	printf("%g\n", roundn(1234.567, 1));                                    
	printf("%g\n", roundn(1234.567, 2));                                    
	printf("%g\n", roundn(1234.567, 3));                                    
                                                                             
	return 0;                                                               
}                                                                            
                                                                             
