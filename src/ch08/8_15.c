#include <stdio.h>                                                                            
#include <stdlib.h>                                                                           
                                                                                              
int main(int argc, char* argv[]) {                                                            
	int  num1, num2, result=0;                                                               
	char op;                                                                                 
                                                                                              
	if (argc != 4) { // 4개(실행파일 포함)의 값을 입력하지 않으면                                       
		printf("USAGE: 8_15.exe NUM1 OP NUM2\n"); // 실행방법을 보여주고                       
		exit(1); 		// 프로그램을 종료. 종료 코드(exit code)를 1로 지정               
//		return 1;                                                                        
	}                                                                                        
                                                                                              
	num1 = atoi(argv[1]);                                                                    
	op = argv[2][0];                                                                         
	num2 = atoi(argv[3]);                                                                    
                                                                                              
	switch (op) {                                                                            
		case '+':                                                                        
			result = num1 + num2;                                                    
			break;                                                                   
		case '-':                                                                        
			result = num1 - num2;                                                    
			break;                                                                   
		case '*':                                                                        
			result = num1 * num2;                                                    
			break;                                                                   
		case '/':                                                                        
			result = num1 / num2;                                                    
			break;                                                                   
		default:                                                                         
			printf("지원되지 않는 연산입니다.\n");                                          
	}                                                                                        
                                                                                              
	printf("result=%d\n", result);                                                           
  	return 0;                                                                                
}                                                                                             
