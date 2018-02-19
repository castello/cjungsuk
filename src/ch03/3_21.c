#include <stdio.h>                                                                             
                                                                                               
int main(void) {                                                                               
	int  x;                                                                                
	char ch;                                                                               
                                                                                               
	x = 15;                                                                                
	printf("x=%2d老 锭, 10 < x && x < 20 =%d\n", x, 10 < x && x < 20);                      
	printf("x=%2d老 锭, 10 < x < 20 =%d\n", x, 10 < x < 20);                                
                                                                                               
	x = 5;                                                                                 
	printf("x=%2d老 锭, 10 < x < 20 =%d\n", x, 10 < x < 20);                                
                                                                                               
	x = 6;                                                                                 
	printf("x=%2d老 锭, ", x);                                                              
   	printf("x%%2==0 || x%%3==0 && x%%6!=0 =%d\n", x%2==0||x%3==0&&x%6!=0);                 
	printf("x=%2d老 锭, ", x);                                                              
	printf("(x%%2==0 || x%%3==0) && x%%6!=0 =%d\n", (x%2==0||x%3==0)&&x%6!=0);             
                                                                                               
	ch='1';                                                                                
	printf("ch='%c'老 锭, ", ch);                                                           
	printf("'0' <= ch && ch <= '9' =%d\n", '0' <= ch && ch <='9');                         
                                                                                               
	ch='a';                                                                                
	printf("ch='%c'老 锭, ", ch);                                                           
	printf("'a' <= ch && ch <= 'z' =%d\n", 'a' <= ch && ch <='z');                         
                                                                                               
	ch='A';                                                                                
	printf("ch='%c'老 锭, ", ch);                                                           
	printf("'A' <= ch && ch <= 'Z' =%d\n", 'A' <= ch && ch <='Z');                         
                                                                                               
	ch='q';                                                                                
	printf("ch='%c'老 锭, ", ch);                                                           
	printf("ch=='q' || ch=='Q' =%d\n", ch=='q' || ch=='Q');                                
                                                                                               
	return 0;                                                                              
}                                                                                              
