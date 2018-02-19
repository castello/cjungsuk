#include <stdio.h>                                                   
#include <time.h>                                                    
                                                                     
void delay(unsigned millis) {                                        
	clock_t start = clock();                                        
	double delayClock = millis * (CLOCKS_PER_SEC / 1000.0);         
                                                                     
	while (clock() - start < delayClock);                           
}                                                                    
                                                                     
int main(void) {                                                     
	int i;                                                          
                                                                     
	printf("= Count Down START =\n");                               
                                                                     
	for (i=10;i>=0;i--) {                                           
		printf("%d\n", i);                                      
		delay(1000);  // 1ÃÊ Áö¿¬(1000 millisecond = 1 second)    
	}                                                               
                                                                     
	printf("= Count Down END =\n");                    
	return 0;                                                       
}                                                                    
