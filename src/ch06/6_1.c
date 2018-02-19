#include <stdio.h>                                                                 
                                                                                   
int multiply(int x, int y) {                                                       
	int result = x * y;                                                        
                                                                                   
	return result;                                                             
}                                                                                  
                                                                                   
int getUserInput(void) {                                                           
	int num;                                                                   
                                                                                   
	printf("input a number(2~9) :");                                           
	scanf("%d", &num);                                                         
	                                                                           
	return num;                                                                
}                                                                                  
                                                                                   
void printGugudan(int dan) {                                                       
	int i;                                                                     
	for(i=1;i<=9;i++) {                                                        
		int result = multiply(dan, i);// int multiply(int x, int y)를 호출   
		printf("%d*%d=%2d\n", dan, i, result);                             
	}                                                                          
}                                                                                  
                                                                                   
void printGugudanAll(void) {                                                       
	int i, j;                                                                  
	for(i=1;i<=9; i++) {                                                       
		for(j=2;j<=9;j++)                                                  
			printf("%d*%d=%2d ", j, i, multiply(j,i));                 
		printf("\n");                                                      
	}                                                                          
}                                                                                  
                                                                                   
int main(void) {                                                                   
	int dan = getUserInput();  // int getUserInput(void)를 호출                  
                                                                                   
	if(2<=dan && dan<=9)                                                       
		printGugudan(dan);  // void printGugudan(int dan)을 호출             
	else                                                                       
		printGugudanAll();  // void printGugudanAll(void)을 호출             
                                                                                   
	return 0;                                                                          
}                                                                                  
