#include <stdio.h>                                                              
#define SIZE 10                                                                 
                                                                                
int main(void) {                                                                
	char board[SIZE][SIZE] = {0};  // 모든 요소를 0으로 초기화                    
	char shipBoard[SIZE-1][SIZE-1] = {                                      
  	  //  1  2  3  4  5  6  7  8  9                                         
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 1                             
		{ 1, 1, 1, 1, 0, 0, 1, 0, 0 }, // 2                             
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 3                             
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 4                             
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // 5                             
		{ 1, 1, 0, 1, 0, 0, 0, 0, 0 }, // 6                             
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0 }, // 7                             
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0 }, // 8                             
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0 }, // 9                             
	};                                                                      
                                                                                
	int i, j;                                                               
	int x, y;                                                               
                                                                                
                                                                                
// 0행에 행번호를, 0열에 열번호를 저장한다.                                               
	for(i=1;i<SIZE;i++) {                                                   
		board[0][i] = board[i][0] = i+'0';                              
	}                                                                       
                                                                                
	while(1) {                                                              
		printf("좌표를 입력하세요.(종료는 0 0)>");                             
		scanf("%d %d", &x, &y);                                         
                                                                                
		if(x==0 || y==0) { // x 또는 y의 값이 0이면 반복문을 벗어난다.           
 		break;                                                          
		} else if(x < 0 || x >= SIZE || y < 0 || y >= SIZE) {           
			printf("잘못된 입력입니다. 다시 입력해주세요.\n");                
			continue;                                               
		}                                                               
                                                                                
		// shipBoard[x-1][y-1]의 값이 1이면, 'O'를 board[x][y]에 저장한다.     
		board[x][y] = shipBoard[x-1][y-1] ? 'O':'X';                    
                                                                                
		// 배열 board의 내용을 화면에 출력한다.                                 
		for(i=0;i<SIZE;i++) {                                           
			for(j=0;j<SIZE;j++) {                                   
				printf("%c", board[i][j]);                      
			}                                                       
			puts("");                                               
		}                                                               
		puts("");                                                       
	}                                                                       
                                                                                
	return 0;                                                               
}                                                                               
