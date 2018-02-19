#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	int i;                                                              
	char ch;                                                            
	short s;                                                            
	unsigned short us;                                                  
                                                                            
	i  = 10;                                                            
	ch = (int)i;                                                        
	printf("i=%d --> ch=%d\n", i, ch);                                  
                                                                            
	i  = 300;                                                           
	ch = (int)i;                                                        
	printf("i=%d --> ch=%d\n", i, ch);                                  
                                                                            
	ch = 10;                                                            
	i  = (int)ch;                                                       
	printf("i=%d --> ch=%d\n", i, ch);                                  
                                                                            
	ch = -2;                                                            
	i  = (int)ch;                                                       
	printf("i=%d --> ch=%d\n", i, ch);                                  
                                                                            
	s  = 32767;                                                         
	us = (unsigned short)s;                                             
	printf("s =%d --> us=%u\n", s, us);                                 
                                                                            
	us = 32767;                                                         
	s  = (short)us;                                                     
	printf("us=%u -->  s=%u\n", us, s);                                 
                                                                            
	s  = -1;                                                            
	us = (unsigned short)s;                                             
	printf("s=%d --> us=%u\n", s, us);                                  
                                                                            
	us = 65535;                                                         
	s  = (short)us;                                                     
	printf("us=%u --> s=%d\n", us, s);                                  
                                                                            
	printf("s =%hx\n", s);   // s의 값을 2 byte의 16진수(%hx)로 출력한다.      
	printf("us=%hx\n", us);                                             
	return 0;                                                           
}                                                                           
