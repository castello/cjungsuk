 #include <stdio.h>                                           
                                                              
 int main(void) {                                             
 	int arr[4] = {0,1,2,3};                                 
 	int *ptr = &arr[0];                                     
                                                              
 	printf("*ptr  =%d, ptr    =%p\n", *ptr, ptr);           
 	printf("arr[0]=%d, &arr[0]=%p\n", arr[0], &arr[0]);     
 	printf("arr[1]=%d, &arr[1]=%p\n", arr[1], &arr[1]);     
 	printf("arr[2]=%d, &arr[2]=%p\n", arr[2], &arr[2]);     
 	printf("arr[3]=%d, &arr[3]=%p\n", arr[3], &arr[3]);     
                                                              
 	return 0;                                               
 }                                                            
