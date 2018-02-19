#include <stdio.h>                              
                                                
void swap(int* px, int* py) {                   
	int tmp = *px;                             
	*px = *py;                                 
	*py = tmp;                                 
}                                               
                                                
int main(void) {                                
	int x = 5;                                 
	int y = 3;                                 
                                                
	printf("x=%d, y=%d\n", x, y);              
	swap(&x, &y);   // 변수 x와 y의 주소를 넘겨준다.  
	printf("x=%d, y=%d\n", x, y);              
                                                
	return 0;                                  
}                                               
