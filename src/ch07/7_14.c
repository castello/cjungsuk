#include <stdio.h>                                                      
                                                                        
int main(void) {                                                        
	int arr[4] = {0,1,2,3};                                            
	int *ptr = &arr[0];                                                
	int *ptr2;                                                         
	int sum = 0;                                                       
                                                                        
	ptr2 = ptr;  // ptr의 값을 ptr2로 복사. 이제 ptr2도 배열 arr을 가리키게 된다. 
                                                                        
	printf("ptr =%p\n", ptr);                                          
	printf("ptr2=%p\n", ptr2);                                         
                                                                        
	if (ptr==ptr2) {                                                   
		printf("ptr과 ptr2가 같은 대상을 가리킵니다.\n");                  
	} else {                                                           
		printf("ptr과 ptr2가 다른 대상을 가리킵니다.\n");                  
	}                                                                  
                                                                        
	while (ptr <= &arr[3])   // 배열 arr의 모든 요소를 출력한다.               
		printf("*ptr++=%d\n", *ptr++);                             
                                                                        
	while (ptr2 <= &arr[3])  // 배열 arr의 모든 요소를 더한다.                
		sum += *ptr2++;                                            
                                                                        
	printf("sum=%d\n", sum);                                           
                                                                        
	return 0;                                                          
}                                                                       
                                                                        
