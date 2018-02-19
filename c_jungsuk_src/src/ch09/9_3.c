#include <stdio.h>                                                        
                                                                          
typedef struct student {                                                  
	int  no;                                                                 
	char name[10];                                                           
	int  kor, math, eng;                                                     
} Student;                                                                
                                                                          
int main(void) {                                                          
	Student stuArr[] = {                                                     
		{ 1, "KIM",  100, 100, 100, },                                       
		{ 2, "LEE",   90,  90,  90, },                                       
		{ 3, "CHOI",  80,  80,  80, },                                       
		{ 4, "PARK", 100, 100, 100, }                                        
	};                                                                       
                                                                          
	const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);                      
	int   total, i;                                                          
	float average;                                                           
                                                                          
	printf("sizeof(stuArr)   =%d\n", sizeof(stuArr));                        
	printf("sizeof(stuArr[0])=%d\n", sizeof(stuArr[0]));                     
	printf("sizeof(Student)  =%d\n", sizeof(Student));                       
	printf("sizeof(struct student)=%d\n", sizeof(struct student));           
	printf("LEN=%d\n", LEN);                                                 
                                                                          
	printf("\n번호 이름       국어 수학 영어 총점  평균\n");                          
	printf("==========================================\n");                  
                                                                          
	for (i=0;i<LEN;i++) {                                                    
		total = stuArr[i].kor + stuArr[i].math + stuArr[i].eng;              
		average = total / (float)3;                                          
                                                                          
		printf("%4d %-10s %4d %4d %4d %4d %6.2f\n", stuArr[i].no,            
		 stuArr[i].name, stuArr[i].kor, stuArr[i].math, stuArr[i].eng,       
		                                             total, average);        
	}                                                                        
                                                                          
	return 0;                                                                
}                                                                         
