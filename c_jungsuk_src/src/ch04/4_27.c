#include <stdio.h>                                                                                   
                                                                                                     
int main(void) {                                                                                     
	int num;                                                                                     
	int sum = 0;                                                                                 
	int flag = 1;   // while문의 조건식에 사용될 변수                                                   
                                                                                                     
	printf("합계를 구할 숫자를 입력하세요.(끌내려면 0을 입력)\n");                                            
                                                                                                     
	while(flag) {    // flag의 값이 1이므로 조건식은 참이 된다.                                           
		printf(">>");                                                                        
		scanf("%d", &num); // 숫자를 입력받는다.                                                  
                                                                                                     
		if(num!=0) {                                                                         
			sum += num; // num이 0이 아니면, sum에 더한다.                                     
		} else {                                                                             
			flag = 0;    // num이 0이면, flag의 값을 0으로 변경. 조건식은 거짓이 된다.               
		}                                                                                    
	}                                                                                            
                                                                                                     
	printf("합계:%d\n", sum);                                                                     
                                                                                                     
	return 0;                                                                                    
}                                                                                                    
