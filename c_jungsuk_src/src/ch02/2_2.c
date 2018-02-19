#include <stdio.h>

int main(void) {
	int x = 10;
	int y = 20;
	int tmp;

	printf("x:%d y:%d\n", x, y);  // 바꾸기 전 x, y의 값을 출력

	tmp = x;
	x   = y;
 	y   = tmp;

  	printf("x:%d y:%d\n", x, y); // 바꾼 후 x, y의 값을 출력
}
