#include <stdio.h>                                                                
#include <time.h>                                                                 
                                                                                  
//두 날짜의 차이를 반환하는 함수                                                          
time_t timeDiff(int y1, int m1, int d1, int y2, int m2, int d2);                  
int    getYoil(int y, int m, int d); // 지정된 날짜의 요일을 반환(0~6), 0은 일요일         
                                                                                  
int main(void) {                                                                  
	char* yoil[] = { "일","월","화","수","목","금","토" };                               
	const int DAY_IN_SEC = 60 * 60 * 24;                                             
                                                                                  
	time_t now   = time(NULL);                                                       
	time_t morae = now + DAY_IN_SEC;   // 오늘로부터 1일 후를 계산                         
                                                                                  
	struct tm today, tomorrow;                                                       
	struct tm* tmp = localtime(&now);  // time_t를 struct tm으로 변환                   
	today = *tmp;                                                                    
                                                                                  
	tmp = localtime(&morae);                                                         
	tomorrow = *tmp;                                                                 
                                                                                  
	printf("now=%lld\n", now); // now=1460639891                                     
	printf("오늘은 %4d년 %2d월 %2d일 입니다.\n",                                           
              today.tm_year + 1900, today.tm_mon + 1, today.tm_mday);             
	printf("내일은 %4d년 %2d월 %2d일 입니다.\n",                                           
     tomorrow.tm_year + 1900, tomorrow.tm_mon + 1, tomorrow.tm_mday);             
                                                                                  
	time_t diff = timeDiff(2001, 1, 1, 2016, 4, 15);                                 
                                                                                  
	printf("2001/01/01과 2016/04/15의 차이는 %lld초(%lld일)\n",                          
                                            diff, diff / DAY_IN_SEC);             
	printf("%d/%2d/%2d은 %s요일입니다.\n",                                               
                              1999,12,31, yoil[getYoil(1999,12,31)]);             
	return 0;                                                                        
}                                                                                 
                                                                                  
int getYoil(int y, int m, int d) {                                                
	struct tm dt = { 0 };                                                            
                                                                                  
	dt.tm_year = y - 1900;                                                           
	dt.tm_mon  = m - 1;                                                              
	dt.tm_mday = d;                                                                  
                                                                                  
	mktime(&dt);  // 년월일 필드로부터 나머지 필드(tm_wday, tm_yday)를 계산해서 채움.             
                                                                                  
	return dt.tm_wday;                                                               
}                                                                                 
                                                                                  
time_t timeDiff(int y1, int m1, int d1, int y2, int m2, int d2) {                 
	struct tm dt1 = { 0 }, dt2 = { 0 }; // 모든 필드를 0으로 초기화                        
	time_t t1, t2;                                                                   
                                                                                  
	dt1.tm_year = y1 - 1900;                                                         
	dt1.tm_mon  = m1 - 1;                                                            
	dt1.tm_mday = d1;                                                                
                                                                                  
	dt2.tm_year = y2 - 1900;                                                         
	dt2.tm_mon  = m2 - 1;                                                            
	dt2.tm_mday = d2;                                                                
                                                                                  
	t1 = mktime(&dt1);  // 구조체의 필드부터 시간을 계산해서 반환                               
	t2 = mktime(&dt2);  // struct tm을 time_t로 변환                                    
                                                                                  
	return difftime(t2, t1);    // t2와 t1간의 시간차이를 반환하는 함수                       
//	return (time_t)(t2 - t1);   // 시간차를 계산해서 반환                              
}                                                                                 
                                                                                  