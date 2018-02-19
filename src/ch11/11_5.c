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
	int i;                                                                                
	Student* sp;                                                                          
                                                                                           
	char* format = "%2d %-10s %3d %3d %3d\n"; // 출력 형식                                   
                                                                                           
	Student sArr[] = {                                                                    
		{ 1, "ABC",   100, 100, 100 },                                                
		{ 2, "ABCD",   90,  90,  90 },                                                
		{ 3, "JKL",    80,  80,  80 },                                                
		{ 4, "AAAA",   70,  70,  70 }                                                 
	};                                                                                    
                                                                                           
	const int LEN = sizeof(sArr) / sizeof(Student);                                       
                                                                                           
	if ((fp = fopen(fname, "w")) == NULL) {                                               
		printf("파일[%s]을 열 수 없습니다.\n", fname);                                      
		exit(1);                                                                      
	}                                                                                     
                                                                                           
	for (i=0;i<LEN;i++) {                                                                 
		sp = &sArr[i];                                                                
                                                                                           
        // 파일(fp)과 화면(stdout)에 출력한다.                                                   
		fprintf(fp, format, sp->no, sp->name, sp->kor, sp->math, sp->eng);            
		fprintf(stdout, format, sp->no, sp->name, sp->kor, sp->math, sp->eng);        
	}                                                                                     
                                                                                           
	fclose(fp);                                                                           
                                                                                           
	return 0;                                                                             
}                                                                                          
                                                                                           
