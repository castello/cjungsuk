#include <stdio.h>                                                      
#include <math.h>                                                       
                                                                        
int main(void) {                                                        
	int menu;                                                       
	int num;                                                        
                                                                        
	while(1) {                                                      
		printf("(1) square\n");                                 
		printf("(2) square root\n");                            
		printf("(3) log\n");                                    
		printf("원하는 메뉴(1~3)를 선택하세요.(종료:0)>");              
		scanf("%d", &menu);                                     
                                                                        
		if(menu==0) {  // if(!menu) {                           
			printf("프로그램을 종료합니다.\n");                   
			break;                                          
		} else if (!(1 <= menu && menu <= 3)) {                 
			printf("메뉴를 잘못 선택하셨습니다.(종료는 0)\n");       
			continue;		                        
		}                                                       
                                                                        
		printf("선택하신 메뉴는 %d번입니다.\n", menu);                 
	}                                                               
                                                                        
	return 0;                                                       
}                                                                       
