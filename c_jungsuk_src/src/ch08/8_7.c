#include <stdio.h>                                                        
                                                                          
int  sumArr(int(*arr)[3], int row, int col);   // 배열의 모든 요소의 합을 반환    
void printArr(int(*arr)[3], int row, int col); // 배열의 모든 요소를 출력       
                                                                          
int main(void) {                                                          
	int arr[][3] = { 1,2,3,4,5,6 };                                      
	const int ROW = sizeof(arr)    / sizeof(arr[0]);                     
	const int COL = sizeof(arr[0]) / sizeof(arr[0][0]);                  
                                                                          
	int sum = sumArr(arr, ROW, COL);                                     
                                                                          
	printArr(arr, ROW, COL);                                             
	printf("sum=%d\n", sum);                                             
	return 0;                                                            
}                                                                         
                                                                          
int sumArr(int (*arr)[3], int row, int col) {                             
	int i, j, sum = 0;                                                   
                                                                          
	for (i=0;i<row;i++)                                                  
		for (j=0;j<col;j++)                                          
			sum += arr[i][j];                                    
	return sum;                                                          
}                                                                         
                                                                          
void printArr(int(*arr)[3], int row, int col) {                           
	int i, j;                                                            
                                                                          
	for (i=0;i<row;i++)                                                  
		for (j=0;j<col;j++)                                          
			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);         
}                                                                         
