#include <stdio.h>                                                     
                                                                       
int multiply(int x, int y)  	{ return x * y;          }             
int abs(int x)             	{ return x > 0 ? x : -x; }             
int diff(int x, int y)     	{ return abs(x - y);     }             
int max(int x, int y)       	{ return x > y ? x : y;  }             
int min(int x, int y)      	{ return x < y ? x : y;  }             
                                                                       
int main(void) {                                                       
	int x = 3;                                                     
	int y = 5;                                                     
                                                                       
	printf("multiply(%d, %d)=%d\n", x, y, multiply(x, y));         
	printf("abs(%d)=%d\n", -y, abs(-y));                           
	printf("diff(%d, %d)=%d\n", x, y, diff(x, y));                 
	printf("max(%d, %d)=%d\n", x, y, max(x, y));                   
	printf("min(%d, %d)=%d\n", x, y, min(x, y));                   
                                                                       
	return 0;                                                      
}                                                                      
