#include <stdio.h>                                                              
#include <time.h>    // time()을 사용하기 위해 추가                                   
#include <stdlib.h>  // srand(), rand()를 사용하기 위해 추가                          
                                                                                
int main(void) {                                                                
	int user, com;                                                          
                                                                                
	printf("가위(1),바위(2), 보(3) 중 하나를 입력하세요.>");                         
	scanf("%d", &user);                                                     
                                                                                
	srand((unsigned)time(NULL)); // 현재시간으로 난수의 씨앗값을 초기화               
	com = rand() % 3 + 1;        // 1,2,3중 하나가 com에 저장됨                  
                                                                                
	printf("당신은 %d입니다.\n", user);                                         
	printf("컴은  %d입니다.\n", com);                                          
                                                                                
	switch(user-com) {                                                      
		case 2: case -1:                                                
			printf("당신이 졌습니다.\n");                               
			break;                                                  
		case 1: case -2:                                                
			printf("당신이 이겼습니다.\n");                              
			break;                                                  
		case 0:                                                         
			printf("비겼습니다.\n");                                   
//			break;		// 마지막 문장이므로 break문을 사용할 필요가 없다. 
	}                                                                       
                                                                                
	return 0;                                                               
}                                                                               
