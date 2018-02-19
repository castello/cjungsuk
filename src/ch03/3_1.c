#include <stdio.h>                                                                   
                                                                                     
int main(void) {                                                                     
	int i;                                                                       
                                                                                     
	size_t i_size      = sizeof i;                                               
	size_t int_size    = sizeof(int);                                            
                                                                                     
	printf("i_size=%d\n",   i_size);                                             
	printf("int_size=%d\n", int_size);                                           
                                                                                     
	printf("sizeof(1.0f)=%d\n", sizeof(1.0f));  // 1.0f는 float타입                
	printf("sizeof(1.0)=%d\n",  sizeof(1.0));   // 1.0은 double타입                
	printf("sizeof(65)=%d\n",   sizeof(65));    // 65는 int타입                    
   	printf("sizeof('A')=%d\n",  sizeof('A'));   // 'A'는 char타입?                 
	printf("sizeof(char)=%d\n", sizeof(char));                                   
                                                                                     
	return 0;                                                                    
}	                                                                             
