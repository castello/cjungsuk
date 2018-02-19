#include <stdio.h>                                                       
                                                                         
void func1() {                                                           
	int tmp = 100;                                                      
	int i;                                                              
                                                                         
	for (i=0;i<1;i++) {                                                 
		printf("[1]tmp=%d\n", tmp); // [1]tmp=100. C99이전에서는 에러   
                                                                         
		int tmp = 200; // OK. 블럭이 다르면 이름이 같아도 됨.               
		printf("[2]tmp=%d\n", tmp); // [2]tmp=200	            
	}                                                                   
	printf("[3]tmp=%d\n", tmp);    	// [3]tmp=100                       
}                                                                        
                                                                         
int main(void) {                                                         
	func1();                                                            
	return 0;                                                           
}                                                                        
