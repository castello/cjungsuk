#include <stdio.h>                                                
#include <time.h>                                                 
                                                                  
int main(void) {                                                  
	clock_t start, end;                                          
	int i;                                                       
                                                                  
	start = clock();                                             
                                                                  
	for(i=0;i<1000*1000*10;i++); // 천만번 반복                     
                                                                  
	end = clock();                                               
                                                                  
	printf("CLOCKS_PER_SEC=%d\n", CLOCKS_PER_SEC);               
	printf("CLK_TCK=%d\n", CLK_TCK);                             
	printf("start=%d\n",   start);                               
	printf("end=%d\n",     end);                                 
	printf("end - start = %d clocks\n", end - start);            
	printf("%f sec\n", (end - start)/(double)CLOCKS_PER_SEC);    
	return 0;                                                    
}                                                                 
                                                                  
