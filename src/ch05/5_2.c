#include <stdio.h>                                                              
                                                                                
int main(void) {                                                                
	int i;                                                                  
	int arr[10];                                                            
	const int LEN = sizeof(arr) / sizeof(arr[0]); // 배열의 길이를 계산          
                                                                                
	printf("sizeof(arr)=%d\n",    sizeof(arr));                             
 	printf("sizeof(arr[0])=%d\n", sizeof(arr[0]));                          
	printf("LEN=%d\n", LEN);                                                
                                                                                
	for(i=0;i<LEN;i++) {   // 배열의 모든 요소를 출력한다.                          
		printf("arr[%d]=%d\n", i, arr[i]);                              
	}                                                                       
                                                                                
	return 0;                                                               
}                                                                               
