#include <stdio.h>                                                                   
                                                                                     
long long factorial(int n) {                                                         
	if(n<=0 || n > 20) return -1;  // 매개변수의 유효성 검사.                             
	if(n<=1)                                                                        
			return 1;                                                       
                                                                                     
	return n * factorial(n-1);                                                      
}                                                                                    
                                                                                     
int main(void) {                                                                     
	int i = 0;                                                                      
	int n = 21;                                                                     
	long long result = 0;                                                           
                                                                                     
	for(i=1; i<=n; i++) {                                                           
		result = factorial(i);                                                  
                                                                                     
		if(result==-1) {                                                        
			printf("유효하지 않은 값입니다.(0<n<=20):%d\n", n);                   
			break;                                                          
		}                                                                       
	   	printf("%2d!=%20lld\n", i, result);                                     
	}                                                                               
                                                                                     
	return 0;                                                                       
}                                                                                    
