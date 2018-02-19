#include <stdio.h>                                                                        
                                                                                          
int main(void) {                                                                          
	int i;                                                                            
                                                                                          
                                                                                          
	for(i=1;i<=5;i++) {                                                               
		printf("%d\n", i); // i의 값을 출력한다.                                      
	}                                                                                 
                                                                                          
	for(i=1;i<=5;i++) {                                                               
		printf("%d", i);   // 개행문자'\n'를 빼면 가로로 출력된다.                         
	}                                                                                 
	printf("\n");                                                                     
                                                                                          
	return 0;                                                                         
}                                                                                         
