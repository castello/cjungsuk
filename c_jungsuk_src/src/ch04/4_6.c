#include <stdio.h>                                                   
                                                                     
int main(void) {                                                     
	int month;                                                   
                                                                     
	printf("현재 월을 입력하세요.>");                                  
	scanf("%d", &month);  // 입력받은 값을 month에 저장한다.            
                                                                     
	switch(month) {                                              
		case 3:                                              
		case 4:                                              
		case 5:                                              
			printf("현재의 계절은 봄입니다.\n");               
			break;                                       
		case 6: case 7: case 8:                              
			printf("현재의 계절은 여름입니다.\n");              
			break;                                       
		case 9: case 10: case 11:                            
			printf("현재의 계절은 가을입니다.\n");              
			break;                                       
		default:                                             
//		case 12:	case 1: case 2:                      
			printf("현재의 계절은 겨울입니다.\n");              
	}                                                            
                                                                     
	return 0;                                                    
}                                                                    
