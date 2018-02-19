#include <stdio.h>                                                      
                                                                        
int main(void) {                                                        
	char* str2DArr[][4] = {                                            
		{ "(0,0)","(0,1)","(0,2)","(0,3)" },                       
		{ "(1,0)","(1,1)","(1,2)","(1,3)" },                       
		{ "(2,0)","(2,1)","(2,2)","(2,3)" },                       
	};                                                                 
                                                                        
	char ch3DArr[][4][6] = {                                           
		{ "(0,0)","(0,1)","(0,2)","(0,3)" },                       
		{ "(1,0)","(1,1)","(1,2)","(1,3)" },                       
		{ "(2,0)","(2,1)","(2,2)","(2,3)" },                       
	};                                                                 
                                                                        
	int i, j;                                                          
                                                                        
	printf("sizeof(str2DArr)=%d\n",       sizeof(str2DArr));           
	printf("sizeof(str2DArr[0])=%d\n",    sizeof(str2DArr[0]));        
	printf("sizeof(str2DArr[0][0])=%d\n", sizeof(str2DArr[0][0]));     
	printf("sizeof(ch3DArr)=%d\n",          sizeof(ch3DArr));          
	printf("sizeof(ch3DArr[0])=%d\n",       sizeof(ch3DArr[0]));       
	printf("sizeof(ch3DArr[0][0])=%d\n",    sizeof(ch3DArr[0][0]));    
	printf("sizeof(ch3DArr[0][0][0])=%d\n", sizeof(ch3DArr[0][0][0])); 
                                                                        
	str2DArr[1][1] = "(*,*)";                                          
	strcpy(ch3DArr[1][1], "(*,*)");                                    
                                                                        
	printf("\n= str2DArr =\n");                                        
                                                                        
	for (i=0;i<3;i++) {                                                
		for (j=0;j<4;j++)                                          
			printf("%s ", str2DArr[i][j]);                     
		printf("\n");                                              
	}                                                                  
                                                                        
	printf("\n= ch3DArr =\n");                                         
                                                                        
	for (i=0;i<3;i++) {                                                
		for (j=0;j<4;j++)                                          
			printf("%s ", ch3DArr[i][j]);                      
		printf("\n");                                              
	}                                                                  
                                                                        
	return 0;                                                          
}                                                                       
