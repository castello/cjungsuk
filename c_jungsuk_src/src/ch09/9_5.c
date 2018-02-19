#include <stdio.h>                                                                     
                                                                                       
typedef struct student {                                                               
	int   no;                                                                         
	char  name[10];                                                                   
	int   kor;                                                                        
	int   eng;                                                                        
	int   math;                                                                       
	int   total;                                                                      
	float average;                                                                    
} Student ;                                                                            
                                                                                       
int main(void) {                                                                       
	Student stuArr[] = {                                                              
		{1, "LEE",  100, 100, 100, },                                             
		{2, "KIM",   90,  90,  90, },                                             
		{3, "CHOI",  80,  80,  80, },                                             
		{4, "PARK", 100, 100, 100, }                                              
	};                                                                                
	Student* pArr = stuArr;                                                           
                                                                                       
	const int LEN = sizeof(stuArr) / sizeof(stuArr[0]);                               
	int i;                                                                            
                                                                                       
	// 총점(total)과 평균(average)을 계산                                                  
	for(i=0;i<LEN;i++) {                                                              
		pArr[i].total   = pArr[i].kor + pArr[i].eng + pArr[i].math;               
                                                                                       
		pArr[i].average = pArr[i].total / 3.0f;                                   
	}                                                                                 
                                                                                       
	// 구조체 배열(stuArr)을 출력                                                          
	printf("번호 이름    국어 영어 수학 총점 평균\n");                                         
	printf("========================================\n");                             
	while(pArr<&stuArr[LEN]) {                                                        
		printf("%3d  %-8s %3d  %3d  %3d  %3d  %6.2f\n", pArr->no, pArr->name,     
			pArr->kor, pArr->eng, pArr->math, pArr->total, pArr->average);    
		pArr++;                                                                   
	}                                                                                 
	printf("========================================\n");                             
                                                                                       
	return 0;                                                                         
}                                                                                      
