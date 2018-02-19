#include <stdio.h>                                                     
                                                                       
int main(void) {                                                       
	int sum = 0, i = 0;                                            
                                                                       
	while((sum+=++i) <= 100)  // i를 1씩 증가시켜서 sum에 계속 더해나간다.  
		printf("%d - %d\n", i, sum);                           
                                                                       
	return 0;                                                      
}                                                                      
