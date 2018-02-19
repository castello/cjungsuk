#include <stdio.h>                                                                               
                                                                                                 
typedef struct student {                                                                         
	int   no;                                                                                   
	char  name[10];                                                                             
	int   kor, math,eng;                                                                        
	int   totalScore;                                                                           
	float average;                                                                              
} Student;                                                                                       
                                                                                                 
void calculateScore(Student* stuArr, const int LEN);                                             
void sortStuArr(Student* stuArr, const int LEN);                                                 
void sortStuArr2(Student* pArr[]);                                                               
void printStuArr(const Student* stuArr, const int LEN);                                          
void printStuArr2(const Student* pArr[]);                                                        
                                                                                                 
int main(void) {                                                                                 
	Student stuArr[] = {                                                                        
		{ 1, "LEE",   90,  90,  90, },                                                      
		{ 2, "KIM",  100, 100, 100, },                                                      
		{ 3, "PARK",  80,  80,  80, },                                                      
		{ 4, "HONG", 100, 100, 100, }                                                       
	};                                                                                          
                                                                                                 
	const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);                                         
                                                                                                 
	Student* pArr[] = { &stuArr[0], &stuArr[1], &stuArr[2], &stuArr[3], NULL };                 
                                                                                                 
	calculateScore(stuArr, LEN);   // 총점과 평균을 계산                                             
                                                                                                 
	printf("= 총점 내림차순 정렬=\n");                                                               
	sortStuArr(stuArr, LEN);       // 구조체 배열을 정렬(총점 내림차순)                                  
	printStuArr(stuArr, LEN);      // 구조체 배열을 출력                                             
                                                                                                 
	printf("\n= 번호 내림차순 정렬 =\n");                                                            
	sortStuArr2(pArr);		  // 구조체 포인터 배열을 정렬(번호 내림차순)                          
	printStuArr2(pArr);		  // 구조체 포인터 배열을 출력                                     
                                                                                                 
	return 0;                                                                                   
}                                                                                                
                                                                                                 
void sortStuArr(Student* stuArr, const int LEN) {                                                
	int i, j;                                                                                   
	Student tmp;                                                                                
                                                                                                 
	for (i=0;i<LEN-1;i++)                                                                       
		for (j=0;j<LEN-1-i;j++)                                                             
			if (stuArr[j].totalScore < stuArr[j+1].totalScore) {                        
				tmp = stuArr[j];                                                    
				stuArr[j] = stuArr[j+1];                                            
				stuArr[j+1] = tmp;                                                  
			}                                                                           
}                                                                                                
                                                                                                 
void sortStuArr2(Student* pArr[]) {                                                              
	int i, j;                                                                                   
	Student* tmp;                                                                               
                                                                                                 
	for (i=0;pArr[i] && pArr[i+1];i++)                                                          
		for (j=0;pArr[j] && pArr[j+1];j++)                                                  
                                                                                                 
			if (pArr[j]->no < pArr[j+1]->no) {                                          
				tmp = pArr[j];                                                      
				pArr[j] = pArr[j+1];                                                
				pArr[j+1] = tmp;                                                    
			}                                                                           
}                                                                                                
                                                                                                 
void calculateScore(Student* stuArr, const int LEN) {                                            
	int i, sum;                                                                                 
                                                                                                 
	for (i=0;i<LEN;i++) {                                                                       
		sum = stuArr[i].kor + stuArr[i].math + stuArr[i].eng;                               
		stuArr[i].totalScore = sum;                                                         
		stuArr[i].average = sum / 3.0f;                                                     
	}                                                                                           
}                                                                                                
                                                                                                 
	void printStu(const Student* p) {                                                           
	printf("%2d %10s %3d %3d %3d %3d %6.2f\n",                                                  
		p->no, p->name, p->kor, p->math, p->eng, p->totalScore, p->average);                
}                                                                                                
                                                                                                 
void printStuArr(const Student* stuArr, const int LEN) {                                         
	int i;                                                                                      
	for (i=0;i<LEN;i++)                                                                         
		printStu(stuArr+i);                                                                 
}                                                                                                
                                                                                                 
void printStuArr2(const Student* pArr[]) {                                                       
	while (*pArr)                                                                               
		printStu(*pArr++);                                                                  
}                                                                                                
