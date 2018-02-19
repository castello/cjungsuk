#include <stdio.h>                                                               
                                                                                 
int main(void) {                                                                 
	char gender;                                                             
	char regNo[15]; // 문자열을 저장할 공간은 문자열의 길이 보다 1이 커야 한다.            
                                                                                 
	printf("당신의 주민번호를 입력하세요.(011231-1111222)>");                        
	scanf("%s", regNo); // 주민등록번호를 입력받는다.                                
                                                                                 
	gender = regNo[7]; // 입력받은 주민등록번호의 8번째 문자를 gender에 저장             
                                                                                 
	switch(gender) {                                                         
		case '1':                                                        
		case '3':                                                        
			printf("당신은 남자입니다.\n");                               
			break;                                                   
		case '2':                                                        
		case '4':                                                        
			printf("당신은 여자입니다.\n");                               
			break;                                                   
		default:                                                         
			printf("유효하지 않은 주민등록번호입니다.\n");;                   
	}                                                                        
                                                                                 
	return 0;                                                                
}                                                                                
