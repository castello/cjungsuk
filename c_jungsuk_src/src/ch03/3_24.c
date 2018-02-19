#include <stdio.h>                                                                       
                                                                                         
int main(void) {                                                                         
	int  i  = 3;                                                                     
	char ch = 'C';                                                                   
                                                                                         
	printf("i=%d\n", i);                                                             
	printf("!i=%d\n", !i);                                                           
	printf("!!i=%d\n", !!i);                                                         
	printf("!!!i=%d\n", !!!i);                                                       
	printf("\n");                                                                    
                                                                                         
	printf("ch=%c\n", ch);                                                           
	printf("ch < 'a' || ch > 'z'=%d\n", ch < 'a' || ch > 'z');                       
	printf("!('a' <= ch && ch <= 'z')=%d\n", !('a' <= ch && ch <= 'z'));             
	printf("  'a' <= ch && ch <= 'z' =%d\n",   'a' <= ch && ch <= 'z');              
                                                                                         
	return 0;                                                                        
}                                                                                        
