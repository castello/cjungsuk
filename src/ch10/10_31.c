#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	printf("최근 수정 시간=%s\n",	__TIMESTAMP__);                
	printf("컴파일된 날짜=%s\n",	__DATE__);                     
	printf("컴파일된 시간=%s\n", 	__TIME__);                     
	printf("파일이름=%s\n",    	__FILE__);                     
	printf("라인번호=%d\n",    	__LINE__);  // 소스 파일의 8번째 줄 
                                                                    
	return 0;                                                      
}                                                                   
                                                                    
