#include <stdio.h>                                                              
                                                                                
int main(void) {                                                                
	int i = 100;                                                            
                                                                                
	printf("sizeof i          	=%d bytes\n", sizeof i);                
	printf("sizeof(char)       	=%d byte\n",  sizeof(char));            
	printf("sizeof(short)      	=%d bytes\n", sizeof(short));           
	printf("sizeof(int)        	=%d bytes\n", sizeof(int));             
	printf("sizeof(long)       	=%d bytes\n", sizeof(long));            
	printf("sizeof(long long) 	=%d bytes\n", sizeof(long long));       
	printf("sizeof(float)      	=%d bytes\n", sizeof(float));           
                                                                                
	printf("sizeof(double)     	=%d bytes\n", sizeof(double));          
	printf("sizeof(long double)	=%d bytes\n", sizeof(long double));     
                                                                                
	return 0;                                                               
}	                                                                        
