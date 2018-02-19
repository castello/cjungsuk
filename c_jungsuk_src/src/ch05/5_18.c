#include <stdio.h>                                                                     
#include <string.h>  // strlen()을 사용하기 위해 추가                                        
                                                                                       
#define MAX_NUM 10                                                                     
                                                                                       
int main(void) {                                                                       
	char word[MAX_NUM+1] = {0}; // 널 문자를 저장할 공간을 위해 1을 더한다.                  
	int  i, wordLen;                                                               
	char tmp;                                                                      
                                                                                       
	printf("%d글자이하의 단어를 입력하세요.>", MAX_NUM);                                   
	scanf("%s", word);                                                             
                                                                                       
	printf("입력한 단어:%s\n", word);                                                 
	wordLen = strlen(word);     // char배열 word에 저장된 문자열의 길이를 구한다.            
                                                                                       
	// 문자열 길이의 절반(wordLen/2)만큼 반복한다.                                                  
	for(i=0;i<wordLen/2;i++) {                                                     
		tmp = word[i];                                                         
		word[i] = word[wordLen-1-i];                                           
		word[wordLen-1-i] = tmp;                                               
	}                                                                              
                                                                                       
	printf("뒤집은 단어:%s\n", word);                                                 
                                                                                       
	return 0;                                                                      
}                                                                                      
