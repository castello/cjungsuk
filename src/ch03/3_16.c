#include <stdio.h>                                              
                                                                
int main(void) {                                                
	int x = 10;                                             
	int y =  8;                                             
                                                                
	printf("%3d %% %2d = %2d\n",   x,  y,  x %  y);         
	printf("%3d %% %2d = %2d\n",   x, -y,  x % -y);         
	printf("%3d %% %2d = %2d\n",  -x,  y, -x %  y);         
	printf("%3d %% %2d = %2d\n",  -x, -y, -x % -y);         
                                                                
	return 0;                                               
}                                                               
