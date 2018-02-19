#include <stdio.h>                                              
                                                                
#define MIN  60                                                 
#define HOUR MIN*60                                             
                                                                
int main(void) {                                                
	int dayInSec = 24 * HOUR; // int dayInSec = 86400;      
	int numOfDay = 10;                                      
	int result = dayInSec * numOfDay;                       
                                                                
	printf("%d day = %d sec\n", numOfDay, result);          
                                                                
	return 0;                                               
}                                                               
