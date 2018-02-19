#include <stdio.h>                                                             
                                                                               
#define PI       3.141592                                                      
#define NEW_LINE '\n'                                                          
#define EMAIL    "aaa@codechobo.com"                                           
#define SECOND   1                                                             
                                                                               
#define MIN      (60 * SECOND)                                                 
#define HOUR     (60 * MIN)	                                                  
#define MAX      65535                                                         
#define LONG_MSG "This is " \                                                  
                 "a very very " \                                              
                 "long message."                                               
                                                                               
int main(void) {                                                               
	const int MAX2 = 200;                                                     
	int timeStamp = 7299;                                                     
	int second = 0;                                                           
	int min = 0;                                                              
	int hour = 0;                                                             
                                                                               
	printf("PI=%f\n", PI);                                                    
	printf("NEW_LINE=%c\n", NEW_LINE);                                        
	printf("EMAIL=%s\n", EMAIL);                                              
	printf("MAX =%d\n", MAX);                                                 
	printf("MAX2=%d\n", MAX2);  // MAX2는 MAX와 부분적으로 일치하므로 확장되지 않음.     
                                                                               
#undef MAX                                                                     
#define MAX 999                // MAX를 재정의                                    
                                                                               
	printf("MAX =%d\n", MAX);                                                 
                                                                               
	hour   = timeStamp / HOUR;                                                
	second = timeStamp % HOUR;                                                
                                                                               
	printf("%d는 %d시간 %d초입니다.\n", timeStamp, hour, second);                 
	printf(LONG_MSG "\n");                                                    
                                                                               
	return 0;                                                                 
}                                                                              
                                                                               
