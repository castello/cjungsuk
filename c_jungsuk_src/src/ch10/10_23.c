#include <stdio.h>                                              
#include <ctype.h>                                              
                                                                
int main(void) {                                                
	int i;                                                     
                                                                
	for(i=0;i<=127;i++) {                                      
		printf("%c, %d - ", i, i);                         
		if (isalpha(i))  printf("alpha,");                 
		if (isdigit(i))  printf("digit,");                 
		if (isxdigit(i)) printf("xdigit,");                
		if (isalnum(i))  printf("alnum,");                 
		if (isblank(i))  printf("blank,");                 
		if (isspace(i))  printf("space,");                 
		if (iscntrl(i))  printf("cntrl,");                 
		if (ispunct(i))  printf("punct,");                 
		if (isgraph(i))  printf("graph,");                 
		if (isprint(i))  printf("print,");                 
		printf("\n");                                      
	}                                                          
                                                                
	printf("ispunct() - ");                                    
	for (i=0;i<=127;i++)                                       
		if (ispunct(i))  printf("%c(%d) ", i, i);          
	printf("\n");                                              
                                                                
	printf("isspace() - ");                                    
	for (i=0;i<=127;i++)                                       
		if (isspace(i))  printf("(%d) ", i);               
	printf("\n");                                              
                                                                
	return 0;                                                  
}                                                               
