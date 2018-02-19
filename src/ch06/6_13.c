#include <stdio.h>                                 
                                                   
long long power(int x, int n) {                    
	if(n==1)                                      
		return x;                             
	return x * power(x, n-1);                     
}                                                  
                                                   
int main(void) {                                   
                                                   
	int i, x=2, n=5;                              
	long long result = 0;                         
                                                   
	for(i=1; i<=n; i++)                           
		result += power(x, i);                
                                                   
	printf("result=%d\n", result);                
   return 0;                                       
}                                                  
