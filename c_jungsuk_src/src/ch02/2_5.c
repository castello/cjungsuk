#include <stdio.h>                                           
                                                             
int main(void) {                                             
	short s  = 0x1234567890; // 10진수로 약 780억              
	int   i  = 0x1234567890; // int의 최대값은 약 20억          
                                                             
	printf("%#llx=%lld\n\n", 0x1234567890, 0x1234567890);   
                                                             
	// 16진수로 출력                                           
	printf("[16진수]\n");	                                
	printf("s=%#x\n", s);  // %x는 정수를 16진수의 형태로 출력한다.  
	printf("i=%#x\n", i);  // #는 16진수 앞에 접두사 0x를 붙여준다. 
	printf("\n");                                           
                                                             
	// 10진수로 출력                                           
	printf("[10진수]\n");	                                
	printf("s=%d\n", s);                                    
	printf("i=%d\n", i);                                    
	printf("\n");                                           
                                                             
	return 0;                                               
}                                                            
