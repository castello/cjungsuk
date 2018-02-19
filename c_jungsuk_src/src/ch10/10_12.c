#include <stdio.h>                                                        
#include <math.h>                                                         
#define PI 3.141592                                                       
                                                                          
int main(void) {                                                          
	int x1 = 1, y1 = 1;  // (1, 1)                                       
	int x2 = 2, y2 = 2;  // (2, 2)                                       
                                                                          
	double c = sqrt(pow((double)x2-x1, 2.0) + pow((double)y2-y1, 2.0));  
//	double c = hypot((double)x2 - x1, (double)y2 - y1);                  
                                                                          
	double a = c * sin(PI / 4);  // PI/4 = 45 degree                     
	double b = c * cos(PI / 4);                                          
                                                                          
	printf("a=%lf\n", a);                                                
	printf("b=%lf\n", b);                                                
                                                                          
	printf("c=%lf\n", c);                                                
	printf("angle=%lf rad\n",      atan2(a, b));                         
	printf("angle=%lf degree\n\n", atan2(a, b)*180 / PI);                
                                                                          
	printf("24 * log10(2.0)=%lf\n",   24*log10(2.0));  // 7.224720       
	printf("53 * log10(2.0)=%lf\n\n", 53*log10(2.0));  // 15.954590      
                                                                          
	return 0;                                                            
}                                                                         
                                                                          
