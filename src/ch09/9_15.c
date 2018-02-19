#include <stdio.h>                                                       
                                                                         
typedef enum direction { LEFT, RIGHT, UP, DOWN } Direction;              
typedef struct { int x, y; } Point;                                      
                                                                         
char* dirName[] = { "LEFT", "RIGHT", "UP", "DOWN" };                     
                                                                         
void go(Point *p, Direction dir, int n); // 좌표 p를 지정된 방향으로 n만큼 이동   
                                                                         
int main(void) {                                                         
	Point p = { 0 };  // Point p = { 0, 0 };                            
	int i;                                                              
                                                                         
	for(i=LEFT;i<=DOWN=i++)                                             
		printf("%s=%d\n", dirName[i], i);                           
                                                                         
	go(&p, DOWN, 5);                                                    
	go(&p, RIGHT, 10);                                                  
	go(&p, UP, 2);                                                      
	go(&p, LEFT, 1);                                                    
                                                                         
	return 0;                                                           
}                                                                        
                                                                         
void go(Point *p, Direction dir, int n) {                                
	printf("[%-5s, %2d] ", dirName[dir], n);                            
	printf("(%2d, %2d)->", p->x, p->y);                                 
                                                                         
	switch (dir) {                                                      
		case LEFT:  p->x += -n; break;                              
		case RIGHT: p->x +=  n; break;                              
		case UP:    p->y += -n; break;                              
		case DOWN:  p->y +=  n; break;                              
	}                                                                   
	printf("(%2d, %2d)\n", p->x, p->y);                                 
                                                                         
	return p;                                                           
}                                                                        
