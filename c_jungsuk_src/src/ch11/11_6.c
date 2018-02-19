#include <stdio.h>                                                                               
                                                                                                 
typedef struct student {                                                                         
	int   no;                                                                                   
	char  name[10];                                                                             
	int   kor;                                                                                  
	int   math;                                                                                 
	int   eng;                                                                                  
	int   totalScore;                                                                           
	float average;                                                                              
} Student;                                                                                       
                                                                                                 
int main(void) {                                                                                 
	FILE* fp;                                                                                   
	char* fname = "c:\\work\\ch11\\scoredata.txt";                                              
	Student s;                                                                                  
	int i;                                                                                      
                                                                                                 
	char* inFormat  = "%d  %s  %d  %d  %d"; // 지시자 사이의 공백 개수는 의미 없음.                      
	char* outFormat = "%2d %-10s %3d %3d %3d %4d %8.2f\n";                                      
                                                                                                 
	if ((fp = fopen(fname, "r")) == NULL) {                                                     
		printf("파일[%s]을 열 수 없습니다.\n", fname);                                            
		exit(1);                                                                            
	}                                                                                           
                                                                                                 
	printf("no  name      kor math eng total average \n");                                      
	printf("========================================\n");                                       
                                                                                                 
	while (1) {                                                                                 
		i = fscanf(fp, inFormat, &s.no, &s.name, &s.kor, &s.math, &s.eng);                  
		if(i < 5) break;  // 읽어들인 값의 개수가 부족하거나 EOF면 반복 종료                            
                                                                                                 
		s.totalScore = s.kor + s.math + s.eng;                                              
		s.average    = s.totalScore / 3.0f;                                                 
                                                                                                 
		fprintf(stdout, outFormat, s.no, s.name, s.kor, s.math, s.eng,                      
			                                  s.totalScore, s.average);                 
	}                                                                                           
                                                                                                 
	fclose(fp);                                                                                 
                                                                                                 
	return 0;                                                                                   
}                                                                                                
                                                                                                 
