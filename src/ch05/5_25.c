#include <stdio.h>                                                                                    
#include <string.h>                                                                                   
                                                                                                      
int main(void) {                                                                                      
	int arr[6] = {1,2,3,4,5,6};                                                                   
	int arr2[2][3] = {0};                                                                         
                                                                                                      
	const int LEN = sizeof(arr) / sizeof(arr[0]);                                                 
	const int COL = sizeof(arr2[0]) / sizeof(arr2[0][0]);                                         
                                                                                                      
	int i;                                                                                        
                                                                                                      
                                                                                                      
	for(i=0;i<LEN;i++) {                                                                          
		printf("arr[%d]=%d  arr2[%d][%d]=%d\n",                                               
 			     i, arr[i], i/COL, i%COL, arr2[i/COL][i%COL]);                            
	}                                                                                             
                                                                                                      
	if(memcmp(arr, arr2, sizeof(arr))==0) {                                                       
		printf("arr과 arr2는 같습니다.\n");                                                       
	} else {                                                                                      
		printf("arr과 arr2는 다릅니다.\n");	                                                      
	}                                                                                             
                                                                                                      
	memcpy(arr2, arr, sizeof(arr)); // 배열 arr에서 arr2로 sizeof(arr)만큼 복사                         
                                                                                                      
	printf("\n= after copying =\n");                                                              
                                                                                                      
	for(i=0;i<LEN;i++) {                                                                          
		printf("arr[%d]=%d  arr2[%d][%d]=%d\n",                                               
			     i, arr[i], i/COL, i%COL, arr2[i/COL][i%COL]);                            
	}                                                                                             
                                                                                                      
	if(memcmp(arr, arr2, sizeof(arr))==0) {                                                       
		printf("arr과 arr2는 같습니다.\n");                                                       
	} else {                                                                                      
		printf("arr과 arr2는 다릅니다.\n");	                                                      
	}                                                                                             
                                                                                                      
	return 0;                                                                                     
}                                                                                                     
