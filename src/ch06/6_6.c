#include <stdio.h>                                                            
                                                                              
int  multiply(int x, int y);   // 두 수를 곱한 결과를 반환                          
int  getUserInput(void);       // 사용자의 입력받아서 반환                           
void printGugudan(int dan);    // 지정된 단(dan)을 출력                           
void printGugudanAll(void);    // 구구단 전체를 출력                               
                                                                              
int main(void) {                                                              
	int dan = getUserInput();  	// int getUserInput(void)를 호출           
                                                                              
	if(2 <= dan && dan <= 9)                                                 
		printGugudan(dan);      // void printGugudan(int dan)을 호출       
	else                                                                     
		printGugudanAll();      // void printGugudanAll(void)을 호출       
                                                                              
	return 0;                                                                
}                                                                             
                                                                              
int multiply(int x, int y) { return x * y; }                                  
int getUserInput(void) {                                                      
	int num;                                                                 
	printf("input a number(2~9) :");                                         
	scanf("%d", &num);                                                       
	return num;                                                              
}                                                                             
                                                                              
void printGugudan(int dan) {                                                  
	int i;                                                                   
	for(i=1;i<=9;i++)                                                        
		printf("%d*%d=%2d\n", dan, i, multiply(dan, i));                 
}                                                                             
                                                                              
void printGugudanAll(void) {                                                  
	int i, j;                                                                
	for(i=1;i<=9;i++) {                                                      
		for(j=2;j<=9;j++)                                                
			printf("%d*%d=%2d ", j, i, multiply(j,i));               
		printf("\n");                                                    
	}                                                                        
}                                                                             
