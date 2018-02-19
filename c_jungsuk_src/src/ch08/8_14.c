#include <stdio.h>                                          
#include <stdlib.h> // atoi()를 사용하기 위해 추가                
                                                            
int main(int argc, char* argv[]) {                          
	int i, num;                                            
                                                            
	printf("argc=%d\n", argc);                             
                                                            
	for (i=0;i<argc;i++)                                   
		printf("argv[%d]=%s\n", i, argv[i]);           
                                                            
	num = atoi(argv[2]);    // 문자열 "123"을 숫자 123으로 변환  
	printf("num=%d\n", num * 100);                         
                                                            
	return 1; // 종료 코드(exit code)를 1로 지정                
}                                                           
