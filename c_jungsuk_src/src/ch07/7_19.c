#include <stdio.h>                          
                                            
int main(void) {                            
	int arr[1][1] = {100};                 
                                            
	printf("arr       =%p\n", arr);        
	printf("arr[0]    =%p\n", arr[0]);     
	printf("&arr[0][0]=%p\n", &arr[0][0]); 
	printf("arr[0][0] =%d\n", arr[0][0]);  
	printf("*arr      =%p\n", *arr);       
	printf("*(int*)arr=%d\n", *(int*)arr); 
	printf("**arr     =%d\n", **arr);      
                                            
	return 0;                              
}                                           
