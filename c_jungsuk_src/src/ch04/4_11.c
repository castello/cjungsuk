#include <stdio.h>                                                                              
                                                                                                
int main(void) {                                                                                
	char   op;                                                                              
	int    x, y;                                                                            
	double result;                                                                          
                                                                                                
	printf("계산할 식을 입력하시오.(입력예 3 + 4)>");                                               
	scanf("%d %c %d", &x, &op, &y);                                                         
                                                                                                
	switch(op) {                                                                            
		case '+':                                                                       
			result = x + y;                                                         
			break;                                                                  
		case '-':                                                                       
			result = x - y;                                                         
			break;                                                                  
		case '*':                                                                       
		case 'x':                                                                       
			result = x * y;                                                         
			break;                                                                  
                                                                                                
		case '/':                                                                       
			if(y!=0)                                                                
				result = x / (double)y; // double로 형변환해야 바른 결과를 얻는다.       
			else                                                                    
				result = 0;                                                     
			break;                                                                  
		default:                                                                        
			op = '?';                                                               
	}                                                                                       
                                                                                                
	if(op!='?') {                                                                           
		if((int)result==result) {                                                       
			printf("%d %c %d = %d\n", x, op, y, (int)result);                       
		} else {                                                                        
			printf("%d %c %d = %f\n", x, op, y, result);		                
		}                                                                               
	} else {                                                                                
		printf("입력하신 연산자는 지원하지 않습니다.\n");                                         
	}                                                                                       
                                                                                                
	return 0;                                                                               
}                                                                                               
