#include <stdio.h>                                                                    
                                                                                      
typedef struct student {                                                           
	int  no;                                                                         
	char name[8];                                                                    
	int  kor;                                                                        
	int  math;                                                                       
	int  eng;                                                                        
} Student;                                                                            
                                                                                      
int main(void) {                                                                      
	Student stuArr[] = {                                                             
		{ 1, "KIM", 100, 100, 100 },                                             
		{ 2, "LEE",  90,  90,  90 },                                             
		{ 3, "CHOI", 80,  80,  80 }                                              
	};                                                                               
	const int SIZE = sizeof(stuArr) / sizeof(Student);                               
	Student s;                                                                       
	int i;                                                                           
                                                                                      
	char* fname = "c:\\work\\ch11\\score.dat";                                       
	FILE* in_f  = fopen(fname, "rb");                                                
	FILE* out_f = fopen(fname, "wb");                                                
                                                                                      
	if (!in_f || !out_f) {  //  if(in_f==NULL || out_f==NULL) {                      
		printf("파일[%s]을 열 수 없습니다.\n", fname);                                 
		exit(1);                                                                 
	}                                                                                
                                                                                      
	// 구조체 배열 전체'sizeof(Student)*SIZE'를 파일에 출력                                  
	fwrite(stuArr, sizeof(Student), SIZE, out_f);                                    
	fflush(out_f);  // 버퍼에 남아있는 내용을 모두 출력하고 버퍼를 비운다.                         
                                                                                      
	// 파일로부터 구조체를 하나씩 읽어서 화면에 출력                                              
	for (i=0;i<SIZE;i++) {                                                           
      // 구조체를 하나'sizeof(Student)*1'를 읽는다.                                         
		fread(&s, sizeof(Student), 1, in_f);                                     
		printf("%d %-8s %3d %3d %3d\n", s.no, s.name, s.kor, s.math, s.eng);     
	}                                                                                
	fclose(in_f);                                                                    
	fclose(out_f);                                                                   
	return 0;                                                                        
}                                                                                     
                                                                                      
