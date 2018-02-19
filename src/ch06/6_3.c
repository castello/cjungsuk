#include <stdio.h>                               
                                                 
int add(int x, int y) {                          
	int result = x + y;                      
	return result;                           
}                                                
                                                 
int main(void) {                                 
	printf("%d\n", add(1, add(2, 3)));       
                                                 
	return 0;                                
}                                                
