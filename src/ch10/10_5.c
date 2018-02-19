#include <stdio.h>                                             
                                                               
typedef struct { int hour, min, sec; } myTime;                 
                                                               
int timeToSec(myTime t)   { /* ①알맞은 코드를 넣어 완성하시오. */ }    
myTime secToTime(int sec) { /* ②알맞은 코드를 넣어 완성하시오. */ }    
                                                               
int main(void) {                                               
	myTime t = secToTime(45296);                              
                                                               
	printf("%d시간 %d분 %d초\n", t.hour, t.min, t.sec);          
	printf("%d초\n", timeToSec(t));                            
	return 0;                                                 
}                                                              
