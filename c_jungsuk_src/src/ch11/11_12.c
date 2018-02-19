#include <stdio.h>                                            
#include <stdlib.h>                                           
                                                              
int main(void) {                                              
	unsigned char buf[16];  // unsigned char타입의 배열         
	int i, cnt;                                              
                                                              
	char* fname = "c:\\work\\ch11\\score.dat";               
	FILE* in_f = fopen(fname, "rb");                         
                                                              
	if (!in_f) {                                             
		printf("파일[%s]을 열 수 없습니다.\n", fname);         
		exit(1);                                         
	}                                                        
                                                              
	while ((cnt = fread(buf, 1, sizeof(buf), in_f)) > 0) {   
		for (i=0; i<cnt; i++)                            
			printf("%02X ", buf[i]);                 
		printf("\n");                                    
	}                                                        
                                                              
	fclose(in_f);                                            
                                                              
	return 0;                                                
}                                                             
