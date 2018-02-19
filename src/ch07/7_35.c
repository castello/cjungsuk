#include <stdio.h>                                                                     
#include <string.h>                                                                    
#include <stdlib.h>                                                                    
#include <time.h>                                                                      
                                                                                       
int main(void) {                                                                       
	char* str2DArr[][4] = {                                                           
		{ "(0,0)","(0,1)","(0,2)","(0,3)" },                                      
		{ "(1,0)","(1,1)","(1,2)","(1,3)" },                                      
		{ "(2,0)","(2,1)","(2,2)","(2,3)" }                                       
	};                                                                                
                                                                                       
	char** ptr = (char**)str2DArr;                                                    
	const int LEN = sizeof(str2DArr) / sizeof(char*);                                 
                                                                                       
	char* tmp;                                                                        
	int i, j, idx;                                                                    
                                                                                       
	for (i=0;i<LEN;i++)                                                               
		printf("str2DArr[%d][%d]=%s, ptr[%d]=%s\n",                               
			              i/4, i%4, str2DArr[i/4][i%4], i, ptr[i]);           
                                                                                       
	// 배열의 각 요소를 섞는다.                                                             
	srand(time(NULL));                                                                
                                                                                       
	for (i=0;i<LEN;i++) {                                                             
		idx = rand() % LEN;                                                       
                                                                                       
		tmp = ptr[i];                                                             
		ptr[i] = ptr[idx];                                                        
		ptr[idx] = tmp;                                                           
	}                                                                                 
                                                                                       
	printf("\n= str2DArr(After shuffle) =\n");                                        
	for (i=0;i<3;i++) {                                                               
		for (j=0;j<4;j++)                                                         
			printf("%s ", str2DArr[i][j]);                                    
		printf("\n");                                                             
	}                                                                                 
                                                                                       
	// 배열을 정렬한다.                                                                   
	for (i=0;i<LEN-1;i++)                                                             
		for (j=0;j<LEN-1-i;j++)                                                   
                                                                                       
			if (strcmp(ptr[j], ptr[j+1])>0) {                                 
				tmp = ptr[j];                                             
				ptr[j] = ptr[j+1];                                        
				ptr[j+1] = tmp;                                           
			}                                                                 
                                                                                       
	printf("\n= str2DArr(After arrange) =\n");                                        
	for (i=0;i<3;i++) {                                                               
		for (j=0;j<4;j++)                                                         
			printf("%s ", str2DArr[i][j]);                                    
		printf("\n");                                                             
	}                                                                                 
                                                                                       
	return 0;                                                                         
}                                                                                      
