#include <stdio.h>                                                                
#include <time.h>                                                                 
#include <stdlib.h>                                                               
                                                                                  
int main(void) {                                                                  
	char data[] = { 'A', 'A', 'B', 'C' };                                        
	int count[sizeof(data) / sizeof(data[0])] = { 0 }; // 빈도수를 저장할 배열         
                                                                                  
	char dArr[sizeof(data) / sizeof(data[0])] = { 0 };                           
	const int LEN = sizeof(data) / sizeof(data[0]);                              
                                                                                  
	int i, j;                                                                    
	int pos = 0, sum = 0;;                                                       
                                                                                  
	srand((unsigned)time(NULL));                                                 
                                                                                  
	for (i=0;i<100;i++)                                                          
		count[rand() % LEN]++; // 임의로 선택된 요소의 값을 증가시킨다.                
                                                                                  
	for (i=0;i<LEN;i++)                                                          
		printf("%c=%d\n", data[i], count[i]); // 각 데이터의 빈도수를 출력          
                                                                                  
	printf("\n== sum ==\n");                                                     
                                                                                  
	for (i=0;i<LEN;i++) {                                                        
		for (j=0;j<pos && dArr[j] != data[i];j++); // 중복체크                  
                                                                                  
		if (j == pos)  // j==pos가 참이면, 중복된 값이 없다는 의미                    
			dArr[pos++] = data[i];  // data[i]를 배열 dArr에 추가            
	}                                                                            
                                                                                  
	for (i=0;i<pos;i++) {                                                        
		sum=0;                                                               
		for (j=0;j<LEN;j++) {                                                
			if (dArr[i] == data[j])                                      
				sum += count[j];                                     
		}                                                                    
		printf("%c=%d\n", dArr[i], sum);                                     
	}                                                                            
                                                                                  
	return 0;                                                                    
}                                                                                 
