#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	int i=5;                                                    
	int j=0;                                                    
                                                                    
	j = i++; // 후위형                                            
	printf("j=i++; 실행 후, i=%d, j=%d\n", i, j);                 
                                                                    
	i=5; // 결과를 비교하기 위해, i와 j의 값을 다시 5와 0으로 변경           
	j=0;                                                        
                                                                    
	j = ++i; // 전위형                                            
	printf("j=++i; 실행 후, i=%d, j=%d\n", i, j);                 
                                                                    
	return 0;                                                   
}                                                                   
