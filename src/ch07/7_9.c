#include <stdio.h>                                                             
                                                                               
int main(void) {                                                               
	const int MAX = 999;                                                      
	int i = 100, i2 = 200;                                                    
                                                                               
	int *ptr = (int*)&MAX; // 형변환 생략불가                                     
	const int *ptr2=&i;  // const int *ptr2=(const int*)&i; 형변환 생략가능       
                                                                               
	const int* const PTR = &MAX;	// 포인터 상수 PTR선언                        
	      int* const PTR2 = &i;	  // 포인터 상수 PTR2선언                     
                                                                               
	printf("MAX=%d\n", MAX);                                                  
	printf("i=%d\n", i);                                                      
	printf("*ptr =%d\n", *ptr);                                               
	printf("*ptr2=%d\n", *ptr2);                                              
                                                                               
//	*ptr  = 200;  // 에러. *ptr은 상수 MAX라서 변경불가                              
//	*ptr2 = 100;  // 에러. ptr2의 타입이 'const int'라서 변경불가                     
	ptr   = &i;   // ptr은 상수가 아니라 변경가능                                    
	ptr2  = &i2;  // ptr2는 상수가 아니라 변경가능                                   
//	PTR   = &i;   // 에러. PTR은 상수라서 변경불가                                   
//	PTR2  = &i2;  // 에러. PTR2는 상수라서 변경불가                                  
	*ptr  = 300;  // 이제 *ptr은  변수 i이므로 변경가능                               
//	*PTR  = 300;  // 에러. *PTR이 상수(MAX)라서 변경불가                             
	*PTR2 = 111;  // OK. *PTR2가 변수 i라서 변경가능                                
                                                                               
	printf("i=%d\n", i);                                                      
	printf("*ptr =%d\n", *ptr);                                               
	printf("i=%d\n", i);                                                      
	printf("*PTR=%d\n", *PTR);                                                
	printf("*PTR2=%d\n", *PTR2);                                              
	return 0;                                                                 
}                                                                              
                                                                               
