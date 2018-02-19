#include <stdio.h>                                                 
                                                                   
void second(void) {                                                
	printf("\t\tsecond() - start\n");                             
	printf("\t\t\tprintf(\"second()\")\n");                       
	printf("\t\tsecond() - end\n");                               
}                                                                  
                                                                   
void first(void) {                                                 
	printf("\tfirst() - start\n");                                
	second();                                                     
	printf("\tfirst() - end\n");                                  
}                                                                  
                                                                   
int main(void) {                                                   
	printf("main() - start\n");                                   
	first();                                                      
	printf("main() - end\n");                                     
                                                                   
	return 0;                                                     
}                                                                  
                                                                   
