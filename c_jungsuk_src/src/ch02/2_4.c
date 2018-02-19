#include <stdio.h>                                        
#define WIDTH  20   // Æø                                  
//#define HEIGHT 10 // ³ôÀÌ                                
                                                          
int main(void) {                                          
//	const int WIDTH  = 20; // Æø                       
const int HEIGHT = 10; // ³ôÀÌ                             
                                                          
	int triangleArea = (WIDTH * HEIGHT) / 2;          
	int rectangleArea = WIDTH * HEIGHT;               
                                                          
	printf("WIDTH=%d\n",  WIDTH);                     
	printf("HEIGHT=%d\n", HEIGHT);                    
	printf("triangleArea=%d\n",  triangleArea);       
	printf("rectangleArea=%d\n", rectangleArea);      
                                                          
	return 0;                                         
}		                                          
