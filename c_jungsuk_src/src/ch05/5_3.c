#include <stdio.h>                                                
                                                                  
int main(void) {                                                  
	int arr[5]  = {50, 60, 70, 80, 90};                       
	int arr2[5] = {0}; // 배열 arr2의 모든 요소를 0으로 초기화        
	int arr3[5];                                              
                                                                  
	int i;                                                    
                                                                  
	// 배열 arr3의 각 요소를 1,2,3,4,5로 초기화                              
	for(i=0;i<5;i++)                                          
		arr3[i] = i+1;                                    
                                                                  
	for(i=0;i<5 ;i++) printf("arr[%d]=%d\n",  i, arr[i]);     
	for(i=0;i<5 ;i++) printf("arr2[%d]=%d\n", i, arr2[i]);    
	for(i=0;i<5 ;i++) printf("arr3[%d]=%d\n", i, arr3[i]);    
                                                                  
	return 0;                                                 
}                                                                 
