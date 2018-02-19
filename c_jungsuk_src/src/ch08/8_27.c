#include <stdio.h>
#include <stdio.h>
#include <string.h>

int cmpDicAsc(char*, char*);  // 사전순 오름차순
int cmpDicDsc(char*, char*);  // 사전순 내림차순
int cmpLenAsc(char*, char*);  // 문자열 길이 오름차순
int cmpLenDsc(char*, char*);  // 문자열 길이 내림차순

void printArr(char**, int);
void sort(char**, int, int(*)(char*, char*));

int main(void) {
	char* strArr[] = { "abc", "jaguar", "bc" , "cbc", "zebra", "dog" };
	int len = sizeof(strArr) / sizeof(char*);

	int(*pf[])(char*,char*) = { cmpDicAsc, cmpDicDsc, cmpLenAsc, cmpLenDsc };
	int i;
	char* input;

	printArr(strArr, len);

	while(1) {
		printf("\n0.사전순 오름차순  \t");
		printf("1.사전순 내림차순    \n");
		printf("2.문자열 길이 오름차순 \t");
		printf("3.문자열 길이 내림차순 \n\n");
		printf("정렬방법을 선택해주세요.>");

		scanf("%d", &i);

		if(!(0 <= i && i <=3))
			break;

		sort(strArr, len, pf[i]);
		printArr(strArr, len);
	}

	return 0;
}

int cmpDicAsc(char* s1, char* s2) { return strcmp(s1, s2) > 0? 1:0;}
int cmpDicDsc(char* s1, char* s2) { return strcmp(s2, s1) > 0 ? 1:0;}
int cmpLenAsc(char* s1, char* s2) { return strlen(s1) > strlen(s2) ? 1:0;}
int cmpLenDsc(char* s1, char* s2) { return strlen(s2) > strlen(s1) ? 1:0;}

void sort(char** strArr, int len, int(*pf)(char*, char*)) {
	char* tmp;
	int i, j;

	for (i=0;i<len-1;i++)
		for (j=0;j<len-1-i;j++)
			if (pf(strArr[j], strArr[j+1])) {
				tmp = strArr[j];
				strArr[j] = strArr[j+1];
				strArr[j+1] = tmp;
			}
}

void printArr(char** strArr, int len) {
	int i;

	printf("[");
	for (i=0;i<len;i++)
		printf("%s, ", strArr[i]);
	printf("]\n");
}