#include <stdio.h>                                                 
#include <stdlib.h>                                                
                                                                   
int main(void) {                                                   
	char* fname = "c:\\work\\ch11\\test.txt";                     
	FILE* fwt = fopen(fname, "wt");  // 텍스트 모드로 쓰기             
	FILE* frt = fopen(fname, "rt");  // 텍스트 모드로 읽기             
	FILE* frb = fopen(fname, "rb");  // 이진 모드로 읽기              
                                                                   
	char  buf[5];                                                 
	char* p = buf;                                                
	int	  ch, cnt, i;                                         
                                                                   
	fputc('a',  fwt);                                             
	fputc('b',  fwt);                                             
	fputc('c',  fwt);                                             
	fputc('\n', fwt);                                             
	fclose(fwt);                                                  
                                                                   
	printf("= 텍스트 모드로 읽기 =\n");                                
	while ((ch = fgetc(frt)) != EOF)                              
		printf("ch=%d\n", ch);                                
                                                                   
	printf("\n= 이진 모드로 읽기 =\n");                               
	cnt = fread(buf, sizeof(char), 10, frb);                      
                                                                   
	while ((ch = fgetc(frt)) != EOF)                              
		printf("ch=%d\n", ch);                                
                                                                   
	for (i=0;i<cnt;i++)                                           
		printf("ch=%d\n", buf[i]);                            
                                                                   
	fclose(frt);                                                  
	fclose(frb);                                                  
                                                                   
	return 0;                                                     
}                                                                  
                                                                   
