#include <stdio.h>                                                                 
                                                                                   
int main(void) {                                                                   
	char* filename = "c:\\work\\ch11\\ONE_HUNDRED_MB2.txt";                       
	FILE* fp = fopen(filename, "w");                                              
                                                                                   
	int fileSize = 1024*1024*1024; // 100 MB                                      
                                                                                   
	fseek(fp, fileSize - 1, SEEK_SET);                                            
                                                                                   
	if (fputc('\0', fp) == EOF) {                                                 
		printf("파일 생성에 실패하였습니다.\n");                                      
                                                                                   
		exit(1);                                                              
	}                                                                             
                                                                                   
	fclose(fp);                                                                   
                                                                                   
	printf("%s가 생성되었습니다.\n", filename);                                        
                                                                                   
	fp = fopen(filename, "r"); 	// 생성된 파일을 읽기 모드로 다시 연다.                
                                                                                   
	fseek(fp, 0, SEEK_END);    	// 파일 포인터를 파일의 끝으로 이동                    
	printf("이 파일의 크기는 %ld bytes입니다.\n", ftell(fp));                           
                                                                                   
	fclose(fp);                                                                   
                                                                                   
	return 0;                                                                     
}                                                                                  
                                                                                   
