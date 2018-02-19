#include <stdio.h>                                         
                                                           
int main(void) {                                           
	int arr[4] = { 0,1,2,3 };                             
	int* ptr = arr;                                       
                                                           
	printf("arr=%p\n", arr);                              
	printf("ptr=%p\n", ptr);                              
	printf("arr==ptr? %d\n", arr == ptr);                 
	printf("arr!=ptr? %d\n", arr != ptr);                 
                                                           
	printf("arr+1 < ptr? %d\n", arr + 1 < ptr);           
	printf("sizeof(arr)=%d\n",     sizeof(arr));          
	printf("sizeof(arr+1)=%d\n",   sizeof(arr + 1));      
	printf("sizeof(ptr)=%d\n",     sizeof(ptr));          
	printf("sizeof(arr-ptr)=%d\n", sizeof(arr-ptr));      
                                                           
	return 0;                                             
}                                                          
                                                           
