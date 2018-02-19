
#include <stdio.h>
#include <stdlib.h>  // qsort()
#include <time.h>

#define SIZE 1000
int   intArr[SIZE];

float performanceTest(void(*pf)(void), unsigned n); // 함수를 n번 수행한 시간 측정
void repeat(void(*pf)(void), unsigned n);       // 지정된 함수(pf)를 n회 반복
void fillArr(void);                              // 배열을 임의의 수로 채움
int compareInt(const void* v1, const void* v2); // qsort()에 사용할 비교함수

void  qsortCall(void);    // qsort()를 호출하는 함수
void  bubbleSort(void);   // 버블정렬 함수

int main(void) {
	float time1, time2;

	fillArr();  // 배열을 임의의 수로 채운다.

	time1 = performanceTest(qsortCall, 100); // 퀵정렬 100회에 걸린 시간측정
	time2 = performanceTest(bubbleSort, 100);// 버블정렬 100회에 걸린 시간측정

	printf("time1(quick sort) =%f\n", time1);
	printf("time2(bubble sort)=%f\n", time2);

	return 0;
}

void  fillArr(void) {
	int i;
	srand(time(NULL));

	for (i=0;i<SIZE;i++)
		intArr[i] = rand()%10;
}

float performanceTest(void(*pf)(void), unsigned n) {
	clock_t start, end;
	start = clock();
	repeat(pf, n);
	end = clock();

	return (end - start) / (float)CLOCKS_PER_SEC;
}

void repeat(void(*pf)(void), unsigned n) {
	while (n--)
		pf();
}

int compareInt(const void* v1, const void* v2) {
	return *(int*)v1 - *(int*)v2;
}

void qsortCall(void) {
	qsort(intArr, SIZE, sizeof(int), compareInt);
}

void bubbleSort(void) {
	int i, j, tmp;

	for (i=0;i<SIZE-1;i++)
		for (j=0;j<SIZE-1-j;j++)
			if (intArr[j] > intArr[j+1]) {
				tmp = intArr[j];
				intArr[j] = intArr[j+1];
				intArr[j+1] = tmp;
			}
}