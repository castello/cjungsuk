#include <stdio.h>                                                             
#include <stdlib.h>                                                            
#include <time.h>                                                              
#include <string.h>                                                            
                                                                               
#define LEN 11                                                                 
                                                                               
int main(void) {                                                               
	char words[][LEN] = { "television", "computer", "mouse", "phone" };    
	char question[LEN];                                                    
	char answer[50];                                                       
                                                                               
	int i, j, n, word_len;                                                 
	char tmp;                                                              
                                                                               
	const int WORD_CNT = sizeof(words) / sizeof(words[0]);                 
                                                                               
	srand((unsigned)time(NULL));                                           
                                                                               
	for(i=0;i<WORD_CNT;i++) {                                              
		word_len = strlen(words[i]);                                   
		strcpy(question, words[i]);  // 단어를 배열 question에 복사         
                                                                               
		for(j=0;j<word_len;j++) {                                      
			n = rand() % word_len;                                 
                                                                               
			tmp = question[j];                                     
			question[j] = question[n];                             
			question[n] = tmp;		                       
		}                                                              
                                                                               
		printf("Q%d. %s의 정답을 입력하세요.>", i+1, question);              
		gets(answer);                                                  
	                                                                       
		if(strcmp(words[i], answer)==0)                                
			printf("맞았습니다.\n");		                       
		else                                                           
			printf("틀렸습니다.\n");                                  
	}                                                                      
	return 0;                                                              
}                                                                              
