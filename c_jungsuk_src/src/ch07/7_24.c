#include <stdio.h>                                                      
                                                                        
int main(void) {                                                        
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12};                         
	int *p1 = arr;                                                     
	int (*p2)[2] = (int(*)[2])arr;                                     
	int (*p3)[3] = (int(*)[3])arr;                                     
	int i;                                                             
                                                                        
	for(i=0;i<12;i++) {                                                
		//printf("&p1[%d]=%p, *(p1+%d)=%d\n",i, p1+i, i, *(p1+i)); 
		printf("p1+%d=%p, *(p1+%d)=%d\n",i, p1+i, i, *(p1+i));     
	}                                                                  
	printf("\n");                                                      
                                                                        
	for(i=0;i<6;i++) {                                                 
		printf("p2+%d=%p *(p2+%d)=%p **(p2+%d)=%d\n",              
                     i, p2+i,i, *(p2+i), i, **(p2+i));                  
	}                                                                  
	printf("\n");                                                      
                                                                        
	for(i=0;i<4;i++) {                                                 
		printf("p3+%d=%p *(p3+%d)=%p **(p3+%d)=%d\n",              
	                 i, p3+i,i, *(p3+i),i, **(p3+i));                  
	}                                                                  
                                                                        
	return 0;                                                          
}                                                                       
                                                                        
