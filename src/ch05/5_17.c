#include <stdio.h>                                                       
#include <stdlib.h>                                                      
#include <time.h>                                                        
                                                                         
#define MAX_NUM 10                                                       
                                                                         
                                                                         
int main(void) {                                                         
	char word[MAX_NUM+1]; // 널문자를 저장할 공간을 위해 1을 더한다.           
	int  i, n, len=0;                                                
	char tmp;                                                        
                                                                         
	srand((unsigned)time(NULL));                                     
                                                                         
	printf("%d글자이하의 단어를 입력하세요.>", MAX_NUM);                     
	scanf("%s", word);                                               
                                                                         
	printf("입력한 단어:%s\n", word);                                   
                                                                         
	// 입력한 문자의 수를 센다.                                            
	while(word[len]) len++; // while(word[len]!='\0') len++;         
                                                                         
	// 배열에 저장된 문자들을 서로 바꾼다.(널문자 제외)                                   
	for(i=0;i<len*2;i++) {                                           
		n = rand() % len;                                        
                                                                         
		tmp     = word[0];                                       
		word[0] = word[n];                                       
		word[n] = tmp;                                           
	}                                                                
                                                                         
	printf("뒤섞은 단어:%s\n", word);                                   
                                                                         
	return 0;                                                        
}                                                                        
