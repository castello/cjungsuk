#include <stdio.h>                                                               
                                                                                 
int main(void) {                                                                 
	int i=5;                                                                 
	i++;		      // ++i;로 바꿔 써도 결과는 같다.                         
	printf("i=%d\n", i);                                                     
                                                                                 
	i=5;		      // 결과를 비교하기 위해 i값을 다시 5로 변경.                 
	++i;                                                                     
	printf("i=%d\n", i);                                                     
                                                                                 
	return 0;                                                                
}                                                                                
