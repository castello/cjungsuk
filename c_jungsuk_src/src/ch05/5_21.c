#include <stdio.h>                                                        
                                                                          
int main(void) {                                                          
	char word[20];                                                    
	int i, score, sum = 0;                                            
                                                                          
	printf("단어를 하나 입력하세요.(소문자로만)>");                            
	scanf("%s", word);                                                
                                                                          
	for(i=0;word[i];i++) {  // for(i=0;word[i]!='\0';i++) {           
		score = word[i] - 'a'+ 1;                                 
		printf("%c %d\n", word[i], score);                        
		sum += score;                                             
	}                                                                 
                                                                          
	printf("sum=%d\n", sum);                                          
                                                                          
	return 0;                                                         
}                                                                         
