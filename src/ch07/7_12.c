#include <stdio.h>                                                   
                                                                     
int main(void) {                                                     
	int arr[] = { 0, 1, 2, 3, 4 };                                  
	int *ptr = &arr[0];                                             
	const int LEN = sizeof(arr) / sizeof(arr[0]);                   
	int i;                                                          
                                                                     
   // 포인터의 값을 1씩 증가시면서 출력.                                      
	for (i = 0; i<LEN; i++)                                         
		printf("ptr++=%p, &arr[%d]=%p\n", ptr++, i, &arr[i]);   
	puts("");  // 줄바꿈                                              
                                                                     
	ptr = &arr[0]; // 포인터 ptr의 값이 바뀌었으므로 다시 초기화               
                                                                     
   // 포인터로 배열의 모든 요소를 출력                                        
	for (i = 0; i<LEN; i++)                                         
		printf("*ptr++=%d, arr[%d]=%d\n", *ptr++, i, arr[i]);   
                                                                     
	return 0;                                                       
}                                                                    
