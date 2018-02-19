#include <stdio.h>                                                                 
                                                                                   
int main(void) {                                                                   
	int num;                                                                   
 	int sum = 0;                                                               
                                                                                   
	printf("숫자를 입력하세요.(예:12345)>");                                         
	scanf("%d", &num);                                                         
                                                                                   
	while(num) {     // while(num!=0) {                                        
		// num을 10으로 나눈 나머지를 sum에 더함                                   
		sum += num%10; 	// sum = sum + num%10;                             
		printf("sum=%3d num=%d\n", sum, num);                              
                                                                                   
		num /= 10;  // num = num / 10;  num을 10으로 나눈 값을 다시 num에 저장     
	}                                                                          
                                                                                   
	printf("각 자리수의 합:%d\n", sum);                                            
	return 0;                                                                          
}                                                                                  
