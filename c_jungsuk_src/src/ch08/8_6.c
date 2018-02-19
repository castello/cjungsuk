#include <stdio.h>                                                            
                                                                              
int  sumArr(int arr[], int len);   // 배열의 모든 요소의 합을 반환                    
void printArr(int arr[], int len); // 배열의 모든 요소를 출력                       
                                                                              
int main(void) {                                                              
	int arr[] = { 1,2,3,4,5 };                                               
	const int LEN = sizeof(arr) / sizeof(arr[0]);                            
                                                                              
	int sum = sumArr(arr, LEN);                                              
                                                                              
	printArr(arr, LEN);                                                      
	printf("sum=%d\n", sum);                                                 
	return 0;                                                                
}                                                                             
                                                                              
int sumArr(int arr[], int len) {  // int sumArr(int* arr, int len) {          
	int sum = 0;                                                             
	                                                                         
	while (len--)                                                            
		sum += *arr++;  // 배열의 모든 요소의 값을 sum에 누적한다.                
                                                                              
	return sum;                                                              
}                                                                             
                                                                              
void printArr(int arr[], int len) { // void printArr(int *arr, int len) {     
	int i;                                                                   
                                                                              
	for (i = 0; i < len;i++)                                                 
		printf("arr[%d]=%d\n", i, arr[i]);                               
}                                                                             
