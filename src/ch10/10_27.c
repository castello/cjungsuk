#include <stdio.h>                                                        
                                                                          
#define max(x, y)	((x) > (y) ? (x) : (y))                              
#define min(x, y)	((x) < (y) ? (x) : (y))                              
#define square(x)	((x) * (x))                                          
#define swap(x, y)  do { int tmp = x; x = y; y = tmp; } while(0)          
                                                                          
int square2(int x) { return x * x; } // 일반 함수                            
                                                                          
int main(void) {                                                          
	int x = 2;                                                           
	int y = 5;                                                           
                                                                          
	printf("x=%d, y=%d\n", x, y);                                        
                                                                          
	swap(x, y); // x와 y의 값을 바꾼다.                                      
	printf("x=%d, y=%d\n", x, y);                                        
                                                                          
	printf("max(x, y)=%d\n",    max(x, y));                              
	printf("max(x, y+5)=%d\n",  max(x, y+5));                            
	printf("max(x, min(y, 10))=%d\n", max(x, min(y, 10)));               
	printf("\n");                                                        
                                                                          
	x = y;                                                               
	printf("x=%d, y=%d\n", x, y);                                        
                                                                          
	printf("square(1.1)=%f\n",   square(1.1));                           
	printf("square(x)=%d\n",     square(x));                             
	printf("square(x+1)=%d\n",   square(x+1));   // ((x+1) * (x+1))      
	printf("square(++x)=%d\n",   square(++x));   // ((++x) * (++x))      
	printf("square2(++y)=%d\n",  square2(++y));  // 일반함수 square2 호출    
                                                                          
	return 0;                                                            
}                                                                         
                                                                          
