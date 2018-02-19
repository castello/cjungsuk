#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void shuffle(char* arr, int len) {
	int i, idx;
	char tmp;

	for (i = 0; i<len; i++) {
		idx = rand() % len;
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}
}

char* makeQuestion(char* answer) { // answer를 뒤섞어서 만든 문자열을 반환
	const int LEN = strlen(answer);
	char* q = calloc(LEN + 1, sizeof(char)); // 널 문자가 저장될 공간도 필요

	memcpy(q, answer, LEN);	// answer를 q에 복사. strncpy(q, answer, LEN);
	shuffle(q, LEN);       	// q의 문자를 뒤섞는다. 

	return q;
}

char* getHint(char* hint, char* answer, int len) { // 힌트를 만들어서 반환
	int   i, idx, cnt = 0;
	char* tmp;

	for (i = 0; i<len; i++) // answer에 포함된 '_'의 갯수를 센다. 
		if (hint[i] == '_')
			cnt++;

	if (cnt <= 2)  return hint; // '_'의 갯수가 2개 이하면 hint를 그대로 반환

	while (1) {
		idx = rand() % len;

		if (hint[idx] == '_') {  // 임의의 위치(idx)의 '_'를 정답문자로 대체
			hint[idx] = answer[idx];
			break;
		}
	}

	return hint;
}


int main(void) {
	char* strArr[] = { "change", "love", "hope", "view" };
	const int LEN = sizeof(strArr) / sizeof(strArr[0]);
	char *question, *answer;
	char input[50];  // 사용자가 입력한 내용을 저장할 배열
	char hint[50];   // 힌트를 저장할 배열

	srand((unsigned)time(NULL));

	answer = strArr[rand() % LEN]; // strArr에서 임의의 문자열을 얻어서 answer에 저장
	question = makeQuestion(answer); // answer를 복사해서 문제를 만들어 반환

	memset(hint, '_', strlen(answer)); // hint를 '_'로 채운다.
	hint[strlen(answer)] = '\0';         // 끝에 널 문자를 넣어줘야 한다.

	while (1) {
		printf("Question:%s\n", question);
		printf("Your answer is :");

		gets(input); // 답을 입력받는다.

		if (memcmp(answer, input, strlen(answer)) == 0) { // 입력한 내용을 정답과 비교
			printf("Correct!!!\n");
			break;
		}
		else { // 정답이 아니면, 힌트를 보여준다.
			printf("Wrong answer, try again!!!\n");
			printf("HINT:%s\n\n", getHint(hint, answer, strlen(answer)));
		}
	}
	return 0;
}
