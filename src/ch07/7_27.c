#include <stdio.h>                                                        
#include <string.h>                                                       
                                                                          
int main(void) {                                                          
	char chArr[] = "abc";                                                
	char *ps = "abc";                                                    
	int i;                                                               
                                                                          
	printf("chArr=%s, ps=%s\n", chArr, ps);                              
                                                                          
	for (i=0;i<sizeof(chArr);i++)                                        
		printf("chArr[%d]=%c, ps[%d]=%c\n", i, chArr[i], i, ps[i]);  
                                                                          
	strcpy(chArr, "ABC");  // OK. 문자 배열 chArr에 문자열 상수의 내용을 복사      
//	strcpy(ps, "ABC");     // 에러. 문자열 상 수의 내용을 변경할 수 없음.           
//	chArr = "ABC";		// 에러. 상수(배열이름 chArr)를 변경할 수 없음.       
	ps = "ABC";	           	// OK. 문자열 상수의 주소를 ps에 저장        
	chArr[1] = 'Z';        // OK. 문자 배열 chArr의 두 번째 요소를 변경          
//	ps[1] = 'Z';           // 에러. 문자열 상수의 내용을 변경할 수 없음.            
                                                                          
	printf("chArr=%s, ps=%s\n", chArr, ps);                              
                                                                          
	return 0;                                                            
}                                                                         
