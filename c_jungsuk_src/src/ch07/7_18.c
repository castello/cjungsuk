#include <stdio.h>                                                                               
                                                                                                 
int main(void) {                                                                                 
	int score[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };                                           
	int (*ptr)[3] = score;                                                                      
	int i, j;                                                                                   
                                                                                                 
	printf("ptr         =%p\n", ptr);                                                           
	printf("*ptr        =%p\n", *ptr);                                                          
	printf("score       =%p\n", score);                                                         
	printf("*score      =%p\n", *score);                                                        
	printf("score[0]    =%p\n", score[0]);                                                      
	printf("&score[0][0]=%p\n", &score[0][0]);                                                  
                                                                                                 
	printf("sizeof(ptr)=%d\n",          sizeof(ptr));                                           
	printf("sizeof(*ptr)=%d\n",         sizeof(*ptr));                                          
	printf("sizeof(score)=%d\n",        sizeof(score));                                         
	printf("sizeof(*score)=%d\n",       sizeof(*score));                                        
	printf("sizeof(score[0])=%d\n",     sizeof(score[0]));                                      
	printf("sizeof(score[0][0])=%d\n",  sizeof(score[0][0]));                                   
	printf("sizeof(&score[0][0])=%d\n", sizeof(&score[0][0]));                                  
                                                                                                 
	for (i=0;i<4;i++)                                                                           
		for (j = 0;j<3;j++)                                                                 
			printf("score[%d][%d]=%2d, ptr[%d][%d]=%2d\n",                              
				                   i, j, score[i][j], i, j, ptr[i][j]);             
                                                                                                 
	return 0;                                                                                   
}                                                                                                
