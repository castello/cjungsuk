#include <stdio.h>                                                                 
#include <stdlib.h>                                                                
                                                                                   
typedef struct student {                                                           
	int  no;                                                                      
	char name[10];                                                                
	int  kor;                                                                     
	int  math;                                                                    
	int  eng;                                                                     
} Student;                                                                         
                                                                                   
int main(void) {                                                                   
	Student stuArr[] = {                                                          
		{ 1, "KIM", 100, 100, 100 },                                          
		{ 2, "LEE",  90,  90,  90 },                                          
		{ 3, "CHOI", 70,  75,  70 },                                          
		{ 4, "PARK", 80,  80,  80 }                                           
	};                                                                            
	const int SIZE = sizeof(stuArr) / sizeof(Student);                            
	Student s;                                                                    
	int i;                                                                        
                                                                                   
	char* fname = "c:\\work\\ch11\\score2.dat";                                   
	FILE* fp = fopen(fname, "wb+");  // 수정 모드(덮어쓰기)로 파일을 open                 
                                                                                   
	if (!fp) {                                                                    
		printf("파일[%s]을 열 수 없습니다.\n", fname);                              
		exit(1);                                                              
	}                                                                             
                                                                                   
	// 구조체 배열을 파일에 출력                                                         
	fwrite(stuArr, sizeof(Student), SIZE, fp);                                    
	fflush(fp);                                                                   
                                                                                   
	printf("pos=%d\n", ftell(fp));                                                
                                                                                   
	// rewind()로 파일의 맨 처음으로 이동. 그래야 파일을 읽을 수 있음.                          
   rewind(fp);   // fseek(fp, 0, SEEK_SET);와 동일                                   
                                                                                   
	printf("pos=%d\n", ftell(fp));                                                
                                                                                   
	// 파일로부터 구조체를 하나씩 읽어서 화면에 출력                                           
	printf("= 순서대로 출력 =\n");                                                    
                                                                                   
	for (i=0; i<SIZE; i++) {                                                      
		fread(&s, sizeof(Student), 1, fp); // 구조체 하나를 읽는다.                 
		printf("%d %-8s %3d %3d %3d pos=%d\n", s.no, s.name, s.kor,           
                                           s.math, s.eng, ftell(fp));              
	}                                                                             
                                                                                   
	// 파일의 끝에서부터 구조체를 하나씩 역순으로 읽어서  화면에 출력                              
	printf("\n= 역순으로 출력 =\n");                                                  
	for (i=1;i<=SIZE;i++) {                                                       
		fseek(fp, sizeof(Student)*-i, SEEK_END);                              
		fread(&s, sizeof(Student), 1, fp); // 구조체를 하나를 읽는다.               
		printf("%d %-8s %3d %3d %3d\n", s.no, s.name, s.kor, s.math, s.eng);  
	}                                                                             
                                                                                   
	fclose(fp);                                                                   
                                                                                   
	return 0;                                                                     
}                                                                                  
                                                                                   
