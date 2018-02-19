#include <stdio.h>                                                       
                                                                         
int main(void) {                                                         
	char* fname1 = "c:\\work\\ch11\\aaa.txt";                           
	char* fname2 = "c:\\work\\ch11\\bbb.txt";                           
                                                                         
	FILE* in_f  = fopen(fname1, "r");                                   
	FILE* out_f = fopen(fname2, "w");                                   
	int ch = 0;                                                         
                                                                         
	if (!in_f || !out_f) {  //  if(in_f==NULL || out_f==NULL) {         
		printf("파일[%s]을 열 수 없습니다.\n", !in_f ? fname1 : fname2);  
		exit(1);                                                    
	}                                                                   
                                                                         
	printf("[%s]를 [%s]로 복사를 시작합니다.\n", fname1, fname2);             
                                                                         
	while ((ch = fgetc(in_f)) != EOF)                                   
		fputc(ch, out_f);                                           
                                                                         
	if(ferror(in_f)||ferror(out_f))                                     
		printf("파일 복사 중 에러가 발생했습니다.\n");                       
	else                                                                
		printf("파일 복사가 끝났습니다.\n");                              
                                                                         
	fclose(in_f);                                                       
	fclose(out_f);                                                      
	return 0;                                                           
}                                                                        
                                                                         
