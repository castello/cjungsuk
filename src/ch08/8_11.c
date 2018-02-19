#include <stdio.h>                                                     
                                                                       
void sort(const int* src, int* rtn, int len) {                         
	int i, j, tmp;                                                    
	const int LEN = len;                                              
	int* ptr = rtn;                                                   
                                                                       
	while (len--)                                                     
		*ptr++ = *src++; // 배열 src의 모든 요소를 배열 rtn으로 복사       
                                                                       
	// 배열 rtn을 정렬한다.                                               
	for (i=0;i<(LEN-1);i++)                                           
		for (j=0;j < (LEN-1)-i;j++)                               
			if (rtn[j] > rtn[j+1]) {                          
				tmp = rtn[j];                             
				rtn[j] = rtn[j+1];                        
				rtn[j+1] = tmp;                           
			}                                                 
}                                                                      
                                                                       
void printArr(const int arr[], int len) {                              
	printf("[");                                                      
	while (len--) printf("%d,", *arr++);                              
	printf("]\n");                                                    
}                                                                      
                                                                       
int main(void) {                                                       
	int src[] = { 6,7,2,9,1,3,4 };                                    
	int rtn[7];  // 정렬결과를 담을 배열                                    
                                                                       
	sort(src, rtn, 7); // 정렬할 배열과 정렬결과를 저장할 배열을 넘겨준다.         
	printArr(src, 7);  // 정렬하기 전 배열을 출력                           
	printArr(rtn, 7);  // 정렬된 배열을 출력                               
                                                                       
	return 0;                                                         
}                                                                      
