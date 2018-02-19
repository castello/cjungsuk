#include <stdio.h>                                                       
#include <time.h>                                                        
                                                                         
int main(void) {                                                         
	char* yoil[] = { "일","월","화","수","목","금","토" };                  
                                                                         
	time_t now    = time(NULL);                                         
	struct tm* lt = localtime(&now);  // time_t를 struct tm으로 변환       
                                                                         
	printf("now=%d\n", now);                                            
	printf("%s", asctime(lt));  // asctime()의 결과에 개행문자가 포함되어 있음.  
	printf("%4d년 %2d월 %2d일 %s요일\n", lt->tm_year + 1900,               
                     lt->tm_mon + 1, lt->tm_mday, yoil[lt->tm_wday]);    
	printf("%2d시 %2d분 %2d초\n", lt->tm_hour, lt->tm_min, lt->tm_sec);   
	printf("올해의 %d번째 날\n", lt->tm_yday);                              
                                                                         
	return 0;                                                           
}                                                                        
                                                                         
