#include <stdio.h>                                   
//#include <stdlib.h>                                
                                                     
int main(void) {                                     
	FILE* fp;                                       
	char* filename = "c:\\work\\ch11\\error.log";   
                                                     
	fprintf(stdout, "Hello - stdout\n");            
	fprintf(stderr, "Hello - stderr\n");            
                                                     
	fp = freopen(filename,"w", stderr);             
                                                     
	if(fp==NULL) {                                  
		printf("freopen() error.\n");           
		exit(1);                                
	}                                               
                                                     
	fprintf(stdout, "Hello2 - stdout\n");           
	fprintf(stderr, "Hello2 - stderr\n");           
                                                     
	fclose(fp);                                     
                                                     
	return 0;                                       
}                                                    
                                                     
