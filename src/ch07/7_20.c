#include <stdio.h>                                                   
                                                                     
int main(void) {                                                     
	int (*ptr)[4] = (int(*)[4])0x100;                               
	int i, j;                                                       
                                                                     
	printf("sizeof(ptr) =%d\n",      sizeof(ptr));                  
	printf("sizeof(*ptr)=%d\n",      sizeof(*ptr));                 
	printf("sizeof(ptr[0])=%d\n",    sizeof(ptr[0]));               
	printf("sizeof(ptr[0][0])=%d\n", sizeof(ptr[0][0]));            
                                                                     
	for(i=0;i<3;i++) {                                              
		printf("ptr+%d=%p, sizeof(*(ptr+%d))=%0#x\n",           
                                    i, ptr+i, i, sizeof(*(ptr+i)));  
		for(j=0;j<4;j++)                                        
			printf("\tptr[%d]+%d=%p\n", i, j, ptr[i]+j);    
	}                                                               
	return 0;                                                       
}                                                                    
