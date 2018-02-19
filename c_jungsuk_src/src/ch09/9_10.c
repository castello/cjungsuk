#include <stdio.h>                                                                        
#include <stdlib.h>                                                                       
                                                                                          
typedef struct student {                                                                  
	int   no;                                                                            
	char  name[10];                                                                      
	int   kor, math, eng;                                                                
	int   totalScore;                                                                    
	float average;                                                                       
} Student;                                                                                
                                                                                          
void inputData(Student* pArr[]);                                                          
void printStuArr(const Student* pArr[]);                                                  
                                                                                          
int size = 0; // 전역변수. 포인터 배열에 저장된 데이터의 갯수                                         
                                                                                          
int main(void) {                                                                          
	Student* pArr[100] = { NULL };                                                       
                                                                                          
	inputData(pArr);    // 화면으로부터 데이터를 입력받아서 pArr에 저장                             
	printStuArr(pArr);  // 데이터를 출력                                                     
                                                                                          
	return 0;                                                                            
}                                                                                         
                                                                                          
void inputData(Student* pArr[]) {                                                         
	Student* p;                                                                          
	int n;                                                                               
                                                                                          
	printf("학생 정보를 입력하세요.(번호, 이름, 국어, 수학, 영어 순서로)\n");                          
	printf("입력을 모두 마친 후에는 q를 입력하고 Enter키를 누르세요.\n");                             
                                                                                          
	while (1) {                                                                          
		p = malloc(sizeof(Student));  // 구조체 변수를 동적할당 받음                         
                                                                                          
		printf(">");                                                                 
		n = scanf("%d%s%d%d%d", &p->no, p->name, &p->kor, &p->math, &p->eng);        
                                                                                          
		if (n == 5) {  // 읽어들인 값의 개수가 5가 아니면 반복 종료                             
			free(p);                                                             
			break;                                                               
		}                                                                            
                                                                                          
		p->totalScore = p->kor + p->math + p->eng;                                   
		p->average    = p->totalScore / 3.0f;                                        
                                                                                          
		pArr[size++] = p;  // 동적 할당 받은 구조체 변수의 주소를 포인터 배열에 저장               
	}                                                                                    
}                                                                                         
                                                                                          
void printStudent(const Student* p) {                                                     
	printf("%2d %-10s %4d %4d %4d %4d  %6.2f\n",                                         
		p->no, p->name, p->kor, p->math, p->eng, p->totalScore, p->average);         
}                                                                                         
                                                                                          
void printStuArr(const Student* pArr[]) {                                                 
	printf("\n번호  이름     국어 수학 영어 총점 평균\n");                                        
	printf("=========================================\n");                               
                                                                                          
	while (*pArr)                                                                        
		printStudent(*pArr++);                                                       
}                                                                                         
