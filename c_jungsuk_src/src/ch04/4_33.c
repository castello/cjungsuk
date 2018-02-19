#include <stdio.h>                                                           
#include <stdlib.h>                                                          
#include <time.h>                                                            
                                                                             
int main(void) {                                                             
	int num1, num2;                                                      
	int sum = 0;                                                         
                                                                             
	srand(time(NULL)); // 난수를 초기화                                      
                                                                             
 roll_again:                                                                  
	num1 = rand() % 6 + 1;   // 1~6범위의 임의의 수를 얻어서 num1에 저장          
	num2 = rand() % 6 + 1;                                               
                                                                             
	printf("num1=%d, num2=%d \n", num1, num2);                           
                                                                             
	sum += num1 + num2;                                                  
                                                                             
	if (num1==num2)     	// num1과 num2의 값이 같으면 다시 주사위를 굴린다.             
		goto roll_again; // roll_again이란 이름의 레이블로 이동             
                                                                             
	printf("sum=%d\n", sum);                                             
                                                                             
	return 0;                                                            
}                                                                            
