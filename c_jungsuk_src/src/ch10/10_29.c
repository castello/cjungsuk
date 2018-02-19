#include <stdio.h>                                                     
#define print_int(x)    printf(#x"=%d\n", x)                           
#define print_txt(txt)  printf(#txt "\n")                              
                                                                       
int main(void) {                                                       
	int x = 5, y = 7;                                                 
	                                                                  
	print_int(x);                                                     
	print_int(y);                                                     
	print_int(x+y);                                                   
	print_int(x     +     y     -2);  // 공백이 많아도 하나로 간주된다.       
	print_txt(                                                        
		원하는 내용을                                                 
		자유롭게 \n                                                  
		\b적으세요.                                                  
	);                                                                
	return 0;                                                         
}