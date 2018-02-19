#include <stdio.h>                                                                  
                                                                                    
int main(void) {                                                                    
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };                                
	int(*ptr)[4] = arr;                                                            
	int i, j;                                                                      
                                                                                    
	printf("sizeof(arr) =%d\n",      sizeof(arr));                                 
	printf("sizeof(*arr)=%d\n",      sizeof(*arr));                                
	printf("sizeof(arr[0])=%d\n",    sizeof(arr[0]));                              
	printf("sizeof(arr[0][0])=%d\n", sizeof(arr[0][0]));                           
	printf("**arr    =%d\n", **arr);                                               
	printf("*arr[0]  =%d\n", *arr[0]);                                             
	printf("arr[0][0]=%d\n", arr[0][0]);                                           
                                                                                    
	for (i=0;i<3;i++) {                                                            
		printf("arr+%d=%p, &arr[%d]=%p\n", i, arr + i, i, &arr[i]);            
		for (j=0;j<4;j++)                                                      
			printf("\tarr[%d]+%d=%p, *(arr[%d]+%d)=%d, arr[%d][%d]=%d\n",  
              i, j, arr[i] + j, i, j, *(arr[i] + j), i, j, arr[i][j]);              
	}                                                                              
	return 0;                                                                      
}                                                                                   
                                                                                    
