#include <stdio.h>                                                     
                                                                       
int main(void) {                                                       
	int arr[4] = {0,1,2,3};                                           
	int* ptr = &arr[0];                                               
                                                                       
	printf("arr  =%p \t ptr  =%p\n", arr,   ptr);                     
	printf("arr+1=%p \t ptr+1=%p\n", arr+1, ptr+1);                   
	printf("arr+2=%p \t ptr+2=%p\n", arr+2, ptr+2);                   
	printf("arr+3=%p \t ptr+3=%p\n", arr+3, ptr+3);                   
                                                                       
	printf("*arr    =%d \t *ptr    =%d\n", *arr,     *ptr);           
	printf("*(arr+1)=%d \t *(ptr+1)=%d\n", *(arr+1), *(ptr+1));       
	printf("*(arr+2)=%d \t *(ptr+2)=%d\n", *(arr+2), *(ptr+2));       
	printf("*(arr+3)=%d \t *(ptr+3)=%d\n", *(arr+3), *(ptr+3));       
                                                                       
	printf("arr[0]=%d \t ptr[0]=%d\n", arr[0], ptr[0]);               
	printf("arr[1]=%d \t ptr[1]=%d\n", arr[1], ptr[1]);               
	printf("arr[2]=%d \t ptr[2]=%d\n", arr[2], ptr[2]);               
	printf("arr[3]=%d \t ptr[3]=%d\n", arr[3], ptr[3]);               
                                                                       
	return 0;                                                         
}                                                                      
