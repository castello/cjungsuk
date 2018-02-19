#include <stdio.h>                                                         
                                                                           
struct point  { int x, y; };                                               
struct circle {                                                            
	struct point* p; // 원점                                               
	int r;	          // 반경(radius)                                      
};                                                                         
                                                                           
int main(void) {                                                           
	struct point  p  = { 1, 2 };                                          
	struct circle c1 = { &p, 3 };                                         
	struct circle c2, c3;                                                 
                                                                           
	c2 = c1; 	// 얕은 복사(shallow copy)                               
			                                                      
	c3 = c1;   			                                      
	c3.p = (struct point*)malloc(sizeof(struct point));                   
	*c3.p = *c1.p;   // c1.p가 가리키는 구조체를 c3.p가 가리키는 구조체로 복사         
                                                                           
	printf("c1.p->x=%d\tc1.p->y=%d\t", c1.p->x, c1.p->y);                 
	printf("c1.r=%d\n", c1.r);                                            
	printf("c2.p->x=%d\tc2.p->y=%d\t", c2.p->x, c2.p->y);                 
	printf("c2.r=%d\n", c2.r);                                            
	printf("c3.p->x=%d\tc3.p->y=%d\t", c3.p->x, c3.p->y);                 
	printf("c3.r=%d\n", c3.r);                                            
                                                                           
	c1.p->x = 100;                                                        
	printf("\n= c1의 변경후 =\n");                                           
	printf("c1.p->x=%d\tc1.p->y=%d\t", c1.p->x, c1.p->y);                 
	printf("c1.r=%d\n", c1.r);                                            
	printf("c2.p->x=%d\tc2.p->y=%d\t", c2.p->x, c2.p->y);                 
	printf("c2.r=%d\n", c2.r);                                            
	printf("c3.p->x=%d\tc3.p->y=%d\t", c3.p->x, c3.p->y);                 
	printf("c3.r=%d\n", c3.r);                                            
	return 0;                                                             
}                                                                          
