#include <stdio.h>                       
                                         
int main(void) {                         
	float  f = 12.12345f;               
                                         
	printf("        1234567890\n");     
	printf("%%f     :%f\n", f);         
	printf("%%8f    :%8f\n", f);        
	printf("%%.4f   :%.4f\n", f);       
	printf("%%8.4   :%8.4f\n", f);      
	printf("%%08.4f :%08.4f\n", f);     
	printf("%%-8.4f :%-8.4f\n", f);     
	printf("\n");                       
	printf("%%e :%e\n", f);             
	printf("%%g :%g\n", f);             
                                         
	return 0;                           
}                                        
