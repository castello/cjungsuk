#include <stdio.h>                                           
                                                             
int main(void) {                                             
	char* filename = "c:\\work\\ch11\\stdin_test.txt";      
	FILE* fwt = fopen(filename, "wt");                      
	char  buf[256];                                         
	int   i=0;                                              
                                                             
	printf("���� %s�� ������ ������ �����Ӱ� �Է��ϼ���.\n", filename);
                                                             
	while (fgets(buf, sizeof(buf), stdin) != NULL)          
		fputs(buf, fwt);                                
                                                             
	fclose(fwt);                                            
                                                             
	return 0;                                               
}                                                            