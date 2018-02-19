 #include <stdio.h>                                                           
                                                                              
 int main(void) {                                                             
  	int    i  = 0x1B2B3B4B;                                                 
  	int   *pi = &i;                                                         
  	char  *pc = (char*)pi;  // 포인터의 타입을 char*로 형변환하여 포인터 pc에 저장      
  	short *ps = (short*)pi;                                                 
                                                                              
  	printf("&i=%p\n", &i);                                                  
 	printf("pi=%p\n", pi);                                                  
  	printf("pc=%p\n", pc);                                                  
  	printf("ps=%p\n", ps);                                                  
                                                                              
  	printf("*pi=%X\n", *pi);  // 포인터 pi가 가리키는 값(i)을 16진수(%X)로 출력      
  	printf("*pc=%X\n", *pc);                                                
  	printf("*ps=%X\n", *ps);                                                
  	printf("*(int*)pc=%X\n",  *(int*)pc);                                   
  	return 0;                                                               
 }                                                                            
