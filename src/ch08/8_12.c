#include <stdio.h>                                                          
                                                                            
char* myStrchr(const char str[], char ch) {                                 
	for (;*str;str++) // *str이 널문자('\0')가 아닌 동안 반복                         
		if (*str == ch) return str; // *str이 ch가 같으면, str을 반환               
                                                                            
	return NULL; // 못찾으면 NULL을 반환                                           
}                                                                           
                                                                            
int main(void) {                                                            
	char* str = "abcde";                                                       
	char* ptr = NULL;                                                          
	char  ch;                                                                  
                                                                            
	printf("str=%s, \t %p\n", str, str);                                       
                                                                            
	ch = 'c';                                                                  
	ptr = myStrchr(str, ch);   // 문자열 str에서 문자 ch를 찾는다.                    
                                                                            
	if (ptr != NULL)                                                           
		printf("ch=%c, \t\t %p\n", *ptr, ptr);                                 
	else                                                                       
		printf("\"%s\"에서 '%c'를 찾을 수 없습니다.\n", str, ch);                    
                                                                            
	ch = 'z';                                                                  
	if ((ptr = myStrchr(str, ch))) // if ((ptr = myStrchr(str, ch))!=NULL)     
		printf("ch=%c, \t\t %p\n", *ptr, ptr);                                 
	else                                                                       
		printf("\"%s\"에서 '%c'를 찾을 수 없습니다.\n", str, ch);                    
                                                                            
	return 0;                                                                  
}                                                                           
