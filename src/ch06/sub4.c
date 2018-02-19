
#include <stdio.h>

extern int gv;           // 참조적 선언. 생략가능한 경우도 있으나 생략하지 않는 것이 원칙

void   gfunc(void);      // 전역 함수의 선언. extern이 생략됨. 전체에서 사용가능
static void sfunc(void); // 정적(static) 함수의 선언. 소스파일(sub3.c)내에서만 사용가능

static void sfunc(void) { // 정적(static) 함수의 정의. 소스파일(sub.c)내에서만 사용가능
	printf("sfunc() - sub4.c\n");
	gv = 200;
}

void gfunc(void) {        // 전역 함수의 정의. extern이 생략됨. 전체에서 사용가능
	sfunc();
	printf("gfunc(%d)\n", gv);
}