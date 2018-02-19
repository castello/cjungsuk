#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int age = 14;                                                  
   	int year;                                                      
                                                                   
   	printf("year:%d\n", year);    // 변수 year의 값을 화면에 출력        
   	year = age + 2000;  // 변수 age의 값에 2000을 더해서 변수 year에 저장   
                                                                   
   	printf("age:%d\n",  age);     // 변수 age의 값을 화면에 출력         
   	printf("year:%d\n", year);    // 변수 year의 값을 화면에 출력        
                                                                   
   	age = age + 1;      // 변수 age에 저장된 값을 1증가시킨다.             
   	printf("age:%d year:%d\n", age, year);                         
                                                                   
	return 0;                                                      
}	                                                               
