#include <stdio.h>                 
                                   
void swap(int x, int y) {          
	int tmp ;                     
                                   
	tmp = x;                      
	x   = y;                      
	y   = tmp;                    
}                                  
                                   
int main(void) {                   
	int x = 5;                    
	int y = 3;                    
                                   
	printf("x=%d, y=%d\n", x, y); 
	swap(x, y);                   
	printf("x=%d, y=%d\n", x, y); 
                                   
	return 0;                     
}                                  
