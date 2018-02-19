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
		} else if (!(1<= menu && menu <= 3)) {                                                     
			printf("메뉴를 잘못 선택하셨습니다.(종료는 0)\n");                                          
			continue;		                                                           
		}                                                                                          
                                                                                                           
                                                                                                           
		for(;;) {                                                                                  
			printf("계산할 값을 입력하세요.(계산 종료:0, 전체 종료:-1)>");                                
			scanf("%d", &num);                                                                 
                                                                                                           
			if(num==0)  break;      // 계산 종료. for문을 벗어난다.                                  
			if(num==-1) goto exit;  // 전체 종료. for문과 while문을 모두 벗어난다.                      
                                                                                                           
			switch(menu) {                                                                     
				case 1: printf("result=%d\n",  num*num);	break;                     
				case 2: printf("result=%lf\n", sqrt((double)num)); break;                  
				case 3: printf("result=%lf\n", log((double)num));  break;                  
			}                                                                                  
		} // for(;;)                                                                               
	}                                                                                                  
                                                                                                           
	exit:                                                                                              
	return 0;                                                                                          
}                                                                                                          
