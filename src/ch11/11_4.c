#include <stdio.h>                                                                
#include <string.h>                                                               
                                                                                  
int main(void) {                                                                  
	char* fname = "11_4.c";                                                      
	char  keyword[50];   // 검색할 단어를 입력받아 저장할 배열                            
	char  buf[1024];     // 한 행을 모두 담을 수 있는 충분한 크기를 지정한다.                 
	int   lineNo, result=0;                                                      
                                                                                  
	FILE* fp = fopen(fname, "r");                                                
                                                                                  
	if (fp==NULL) {  //  if(!fp) {                                               
		printf("파일[%s]을 열 수 없습니다.\n", fname);                             
		exit(1);                                                             
	}                                                                            
                                                                                  
	printf("검색할 단어를 입력하세요.>");                                               
	scanf("%s", keyword);                                                        
                                                                                  
	for (lineNo=1;fgets(buf, sizeof(buf), fp);lineNo++) {                        
		if (strstr(buf, keyword)) {  // if(strstr(buf, keyword)!=NULL) {     
			result++;                                                    
			printf("%3d: %s", lineNo, buf);   // buf에 개행문자가 포함되어 있음  
                                                                                  
		}                                                                    
	}                                                                            
                                                                                  
	printf("\n[%s]의 %d개의 행에서 '%s'를 찾았습니다.\n", fname, result, keyword);       
                                                                                  
	fclose(fp);                                                                  
	return 0;                                                                    
}                                                                                 
