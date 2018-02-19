#include <stdio.h>                                                          
#include <stdlib.h>                                                         
#include <string.h>                                                         
                                                                            
int main(void) {                                                            
	int    i  = atoi(" 123 ");     	                                       
	double d1 = atof("-3.14");                                             
	double d2 = atof("1.23e3");                                            
                                                                            
	char buffer[10];                                                       
	char* str = "abcd";                                                    
	char* ptr;   // 변환을 마친 주소를 저장하기 위한 포인터                           
	long l = strtol(str, &ptr, 16);  // 문자열 str을 16진수로 간주해서 변환        
                                                                            
	if (ptr != str + strlen(str)) {                                        
		printf("변환 중 에러가 발생했습니다.\n");                              
	} else {                                                               
		printf("l=%#X\n", l); // 0xABCD                                
	}                                                                      
                                                                            
	printf("i =%d\n", i);                                                  
	printf("d1=%f\n", d1);                                                 
	printf("d2=%f\n", d2);                                                 
                                                                            
	sprintf(buffer, "%X", i);  // i를 16진수 문자열로 변환해서 buffer에 저장        
	printf("i=%s\n", buffer);                                              
                                                                            
	sscanf(buffer, "%X", &i);  // buffer의 16진 진수 문자열을 변환해서 i에 저장     
	printf("i=%d\n", i);                                                   
                                                                            
	return 0;                                                              
}                                                                           
                                                                            
