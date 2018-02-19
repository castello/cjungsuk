#include <stdio.h>                                                                                 
#include <string.h>  // memcpy()를 사용하기 위해 추가                                                    
                                                                                                   
int main(void) {                                                                                   
	int arr1[] = { 2, 3, 5, 7 };                                                               
	int arr2[sizeof(arr1)/sizeof(arr1[0])];                                                    
	int arr3[sizeof(arr1)/sizeof(arr1[0])];                                                    
                                                                                                   
	const int LEN = sizeof(arr1)/sizeof(arr1[0]);                                              
	int i;                                                                                     
	// 반복문으로 배열 arr1의 모든 요소를 하나씩 배열 arr2로 복사                                                   
	for(i=0;i<LEN;i++)                                                                         
		arr2[i]=arr1[i];                                                                   
                                                                                                   
 	// memcpy()로 배열 arr1을 배열 arr3에 통째로 복사                                                  
	memcpy(arr3, arr1, sizeof(arr1));                                                          
                                                                                                   
	for(i=0;i<LEN;i++)                                                                         
		printf("arr1[%d]=%d \t arr2[%d]=%d \t arr3[%d]=%d\n",                              
		                          i, arr1[i], i, arr2[i], i, arr3[i]);                     
	return 0;                                                                                  
}                                                                                                  
