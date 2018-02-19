#include <stdio.h>                                                               
#include <string.h>  // memcpy(), memcmp()를 사용하기 위해 추가                        
                                                                                 
int main(void) {                                                                 
	int arr1[] = { 2, 3, 5, 7 };                                             
	int arr2[sizeof(arr1)/sizeof(arr1[0])];                                  
	int arr3[sizeof(arr1)/sizeof(arr1[0])];                                  
                                                                                 
	const int LEN = sizeof(arr1)/sizeof(arr1[0]);                            
                                                                                 
	int i;                                                                   
	int chk = 0; // 두 배열이 같은지 확인하기 위한 변수. 0이면 같음, 1이면 다름.           
                                                                                 
	memcpy(arr2, arr1, sizeof(arr1)); // 배열 arr1 전체를 배열 arr2에 복사         
	memcpy(arr3, arr1, sizeof(arr1)); // 배열 arr1 전체를 배열 arr3에 복사         
                                                                                 
	arr2[0] = 100; // 배열 arr2의 첫 번째 요소의 값을 변경                           
                                                                                 
	for(i=0;i<LEN;i++)                                                       
		printf("arr1[%d]=%d \t arr2[%d]=%d \t arr3[%d]=%d\n"             
		        	, i, arr1[i], i, arr2[i], i, arr3[i]);           
                                                                                 
	chk = memcmp(arr2, arr1, sizeof(arr1));                                  
                                                                                 
	if(chk==0) {                                                             
		printf("arr1과 arr2는 같습니다.\n");                                 
	} else {                                                                 
		printf("arr1과 arr2는 다릅니다.\n");	                         
	}                                                                        
                                                                                 
	chk = memcmp(arr3, arr1, sizeof(arr1));                                  
                                                                                 
	if(!chk) {   // if(ch==0) {                                              
		printf("arr1과 arr3은 같습니다.\n");                                 
	} else {                                                                 
		printf("arr1과 arr3은 다릅니다.\n");	                         
	}                                                                        
                                                                                 
	return 0;                                                                
}                                                                                
