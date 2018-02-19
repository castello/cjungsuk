#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	int  score;        // 점수를 저장하기 위한 변수                            
 	char grade =' ';   // 학점을 저장하기 위한 변수. 공백으로 초기화한다.            
                                                                            
                                                                            
	printf("점수를 입력하세요.>");                                           
	scanf("%d", &score);                                                
                                                                            
   	if (score >= 90) {         // score가 90점 보다 같거나 크면 A학점          
		grade = 'A';                                                
	} else if (score >=80) {   // score가 80점 보다 같거나 크면 B학점          
		grade = 'B';                                                
	} else if (score >=70) {   // score가 70점 보다 같거나 크면 C학점          
		grade = 'C';                                                
	} else {                   // 나머지는 D학점                            
		grade = 'D';                                                
	}                                                                   
                                                                            
	printf("당신의 학점은 %c입니다.\n", grade);                               
                                                                            
	return 0;                                                           
}                                                                           
