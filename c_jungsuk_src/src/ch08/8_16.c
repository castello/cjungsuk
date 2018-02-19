#include <stdio.h>                                                         
#include <stdlib.h>                                                        
                                                                           
int main(void) {                                                           
	int arr[] = { 1,2,3,4,5 };     // 자동 할당                              
	const int LEN = sizeof(arr) / sizeof(arr[0]);                         
                                                                           
	int* p = malloc(sizeof(arr));  // 동적 할당. 배열 arr과 같은 크기 할당        
	int  i;                                                               
                                                                           
	if (p == NULL) { // 할당에 실패했는지 확인                                  
			printf("out of memory\n");                            
			exit(1); // 비정상적으로 프로그램 종료                        
	}                                                                     
                                                                           
	for (i=0;i<LEN;i++) {                                                 
			p[i] = arr[i] * 10;                                   
			printf("arr[%d]=%d, p[%d]=%d\n", i, arr[i], i, p[i]); 
	}                                                                     
                                                                           
	return 0;                                                             
}                                                                          
