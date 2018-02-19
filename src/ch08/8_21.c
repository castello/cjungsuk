#include <stdio.h>                                                    
#include <stdlib.h>                                                   
                                                                      
#define MB (1024*1024)                                                
                                                                      
int main(void) {                                                      
	int mem = 1024;  // 할당 요청할 메모리                                
	int total = 0;   // 할당 요청에 성공한 메모리의 총합                      
                                                                      
	while (mem) { // while(mem!=0) {                                 
		if (malloc(mem*MB)) {                                    
			total += mem;                                    
			printf("total=%d, mem=%d\n", total, mem);        
		} else {                                                 
			mem /= 2; // 할당에 실패하면 요청할 메모리를 반으로 줄임     
		}                                                        
	}                                                                
                                                                      
	printf("total=%d MB\n", total);                                  
	return 0;                                                        
}                                                                     
