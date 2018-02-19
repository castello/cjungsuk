#include <stdio.h>                                                        
#include <string.h>                                                       
                                                                          
struct date {                                                             
	int year, mon, day;                                                      
};                                                                        
                                                                          
struct userScore {                                                        
	char userId[8];            // 사용자 id                                    
	int  score;		            // 점수                                       
	int  rank;		            // 등수                                       
	struct date inputDate;     // 입력(input) 날짜                              
	struct date changeDate;    // 변경(change) 날짜                             
};                                                                        
                                                                          
int main(void) {                                                          
	struct userScore s1 = { "myId", 100, 1,{ 2016, 1, 31 },{ 2016, 2, 2 } }; 
	struct date d1 = { 2016, 3, 3 };                                         
                                                                          
	strcpy(s1.userId, "yourId");                                             
                                                                          
	s1.inputDate.year = 1999;                                                
	s1.inputDate.mon  = 12;                                                  
	s1.inputDate.day  = 31;                                                  
                                                                          
		s1.changeDate = d1;  // 중첩된 구조체를 통째로 변경                          
                                                                          
	printf("userId=%s\n", s1.userId);                                        
	printf("score=%d\n",  s1.score);                                         
	printf("rank=%d\n",   s1.rank);                                          
	printf("inputDate.year=%d\n",  s1.inputDate.year);                       
	printf("inputDate.mon=%d\n",   s1.inputDate.mon);                        
	printf("inputDate.day=%d\n",   s1.inputDate.day);                        
	printf("changeDate.year=%d\n", s1.changeDate.year);                      
	printf("changeDate.mon=%d\n",  s1.changeDate.mon);                       
	printf("changeDate.day=%d\n",  s1.changeDate.day);                       
                                                                          
	return 0;                                                                
}                                                                         
