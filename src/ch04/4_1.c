#include <stdio.h>                           
                                             
int main(void) {                             
	int x = 0;                           
	                                     
	printf("x=%d 일때, 참인 것은\n", x);     
                                             
	if(x==0) printf("x==0\n");           
	if(x!=0) printf("x!=0\n");           
	if(x)    printf("x\n");              
	if(!x)   printf("!x\n");             
                                             
	x = 1;                               
	printf("\nx=%d 일때, 참인 것은\n", x);   
                                             
                                             
	if(x==0) printf("x==0\n");           
	if(x!=0) printf("x!=0\n");           
                                             
	if(x)    printf("x\n");              
	if(!x)   printf("!x\n");             
                                             
	return 0;                            
}                                            
