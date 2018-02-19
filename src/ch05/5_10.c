#include <stdio.h>                                                        
#include <stdlib.h>                                                       
#include <time.h>                                                         
#define LEN 10                                                            
                                                                          
int main(void) {                                                          
	int code[] = { -4, -1, 3, 6, 11 };  // 불연속적인 값들로 구성된 배열      
	int arr[LEN];                                                     
	int i, tmp;                                                       
	const int CODE_LEN = sizeof(code) / sizeof(code[0]);              
                                                                          
	srand((unsigned)time(NULL));                                      
                                                                          
	for(i=0;i<LEN;i++) {                                              
		tmp = rand() % CODE_LEN;                                  
		arr[i] = code[tmp];                                       
	}                                                                 
                                                                          
	for(i=0;i<LEN;i++)                                                
		printf("arr[%d]=%d\n",  i, arr[i]);                       
                                                                          
	return 0;                                                         
}                                                                         
