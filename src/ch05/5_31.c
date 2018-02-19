#include <stdio.h>                                                       
#include <time.h>                                                        
#include <stdlib.h>                                                      
                                                                         
#define SIZE 5                                                           
                                                                         
int main(void) {                                                         
	int bingo[SIZE][SIZE];                                           
	int i, j, x, y, tmp, num;                                        
                                                                         
	// 배열의 모든 요소를 1부터 SIZE*SIZE까지의 숫자로 초기화                    
	for(i=0;i<SIZE*SIZE;i++) {                                       
		bingo[i/SIZE][i%SIZE] = i + 1;                           
	}                                                                
                                                                         
	// 배열에 저장된 값을 뒤섞는다.(shuffle)                                 
	srand(time(NULL));                                               
                                                                         
	for(i=0;i<SIZE*SIZE*2;i++) {                                     
		x = rand() % SIZE;                                       
		y = rand() % SIZE;                                       
                                                                         
		// 1행 1열의 값(bingo[0][0])과 임의로 선택된 값(bingo[x][y])을 바꾼
		tmp =  bingo[0][0];                                      
		bingo[0][0] = bingo[x][y];                               
		bingo[x][y] = tmp;                                       
	}                                                                
                                                                         
	do {                                                             
		for(i=0;i<SIZE;i++) {                                    
			for(j=0;j<SIZE;j++)                              
				printf("%2d ", bingo[i][j]);	         
			puts("");                                        
		}                                                        
		puts("");                                                
                                                                         
		printf("1~%d의 숫자를 입력하세요.(종료:0)>", SIZE*SIZE);        
		scanf("%d", &num);                                       
		                                                         
		for(i=0;i<SIZE*SIZE;i++) {                               
			if(bingo[i/SIZE][i%SIZE]==num) {                 
				bingo[i/SIZE][i%SIZE] = 0;               
				break;                                   
			}                                                
		}                                                        
	} while(num!=0);                                                 
                                                                         
	return 0;                                                        
}                                                                   
