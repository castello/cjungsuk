#include <stdio.h>                                                         
                                                                           
int main(void) {                                                           
	int arr2[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };                       
	int arr[sizeof(arr2)/sizeof(arr2[0][0])]; // arr2와 같은 크기의 1차원 배열  
                                                                           
	const int LEN = sizeof(arr2) / sizeof(arr2[0][0]);                    
	int len = LEN;                                                        
	int i;                                                                
                                                                           
	int *ptr = arr;                                                       
	int *ptr2 = (int*)arr2;                                               
                                                                           
	while (len--)                                                         
		*ptr++ = *ptr2++;  // 배열 arr2의 내용을 하나씩 배열 arr로 복사        
                                                                           
	for (i=0;i<LEN;i++)                                                   
		printf("arr[%d]=%d \t arr2[%d][%d]=%d\n",                     
           i, arr[i], i/4, i%4, arr2[i/4][i%4]);  // p.???을 참고            
	return 0;                                                             
}                                                                          
                                                                           
