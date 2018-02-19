#include <stdio.h>                                     
                                                       
int main(void) {                                       
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };   
	int *p1 = (int*)arr;  // 타입이 다르므로 형변환이 필요하다.
	int len = sizeof(arr) / sizeof(arr[0][0]);        
	int sum = 0;                                      
                                                       
	printf("arr=%p\n", arr);                          
                                                       
	while (len--) {                                   
		printf("p1=%p \t *p1=%d\n", p1, *p1);     
		sum += *p1++;                             
	}                                                 
                                                       
	printf("sum=%d\n", sum);                          
                                                       
	return 0;                                         
}                                                      
