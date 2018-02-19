#include <stdio.h>                                                                    
#include <stdlib.h>                                                                   
#include <memory.h>                                                                   
                                                                                      
typedef struct student {                                                              
	int   no;                                                                        
	char  name[10];                                                                  
	int   kor, math, eng;                                                            
	int   totalScore;                                                                
	float average;                                                                   
} Student;                                                                            
                                                                                      
int  deleteStu(Student* pArr[], int no);                                              
void printStuArr(const Student* pArr[]);                                              
                                                                                      
int size = 0; // 포인터 배열에 저장된 데이터의 개수                                            
                                                                                      
int main(void) {                                                                      
	Student stuArr[] = {                                                             
		{ 1, "LEE",  100, 100, 100, 300, 100.0f },                               
		{ 2, "KIM",   90,  90,  90, 270,  90.0f },                               
		{ 3, "PARK",  80,  80,  80, 240,  80.0f },                               
		{ 4, "CHOI", 100, 100, 100, 300, 100.0f }                                
	};                                                                               
                                                                                      
	Student* pArr[100] = { NULL };                                                   
                                                                                      
	const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);                              
	int i, no;                                                                       
                                                                                      
	for (i=0;i<LEN;i++) {                                                            
		pArr[i]  = malloc(sizeof(Student)); // 구조체 변수를 동적할당                  
		*pArr[i] = stuArr[i];  // 구조 배열의 요소를 복사                              
	}                                                                                
                                                                                      
	size = LEN;                                                                      
                                                                                      
	printStuArr(pArr);                                                               
                                                                                      
	while (1) {                                                                      
		printf("\n삭제할 학생의 번호를 입력하세요.(종료:0)>");                             
		scanf("%d", &no);                                                        
                                                                                      
		if (no == 0) break;                                                      
                                                                                      
		if (deleteStu(pArr, no) == 0) {                                          
			printf("일치하는 번호가 없습니다.\n");                                  
			continue;                                                        
		}                                                                        
		printStuArr(pArr);                                                       
	}                                                                                
                                                                                      
	return 0;                                                                        
}                                                                                     
                                                                                      
void printStudent(const Student* p) {                                                 
	printf("%2d %-10s %4d %4d %4d %4d  %6.2f\n",                                     
		p->no, p->name, p->kor, p->math, p->eng,                                 
		p->totalScore, p->average);                                              
}                                                                                     
                                                                                      
void printStuArr(const Student* pArr[]) {                                             
	printf("번호  이름     국어 수학 영어 총점  평균\n");                                     
	printf("=========================================\n");                           
                                                                                      
	while (*pArr)                                                                    
		printStudent(*pArr++);                                                   
}                                                                                     
                                                                                      
int deleteStu(Student* pArr[], int no) {                                              
	int i;                                                                           
	for (i=0;pArr[i];i++)                                                            
		if (pArr[i]->no == no) {                                                 
			free(pArr[i]);                                                   
			memmove(&pArr[i], &pArr[i+1], sizeof(Student*)*(size- i - 1));   
			pArr[--size] = NULL;                                             
                                                                                      
			return 1;                                                        
		}                                                                        
	return 0;                                                                        
}                                                                                     
                                                                                      
