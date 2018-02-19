#include <stdio.h>                                                                 
                                                                                   
void printFileInfo(FILE* f) {                                                      
	printf("_ptr=%p\n",     	f->_ptr);                                     
	printf("_cnt=%d\n",     	f->_cnt);                                     
	printf("_base=%p\n",    	f->_base);                                    
	printf("_flag=%d\n",    	f->_flag);                                    
	printf("_file=%d\n",    	f->_file); // 0:stdin, 1:stdout, 2:stderr     
	printf("_charbuf=%d\n",  f->_charbuf);                                        
	printf("_bufsiz=%d\n",   f->_bufsiz);                                         
	printf("_tmpfname=%s\n", f->_tmpfname);                                       
	printf("\n");                                                                 
}                                                                                  
                                                                                   
int main(void) {                                                                   
	printf("[stdin]\n");  printFileInfo(stdin);                                   
	printf("[stdout]\n"); printFileInfo(stdout);                                  
	printf("[stderr]\n"); printFileInfo(stderr);                                  
	return 0;                                                                     
}                                                                                  
