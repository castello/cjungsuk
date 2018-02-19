#include <stdio.h>                                                           
                                                                             
typedef struct student {                                                     
	int  no;                                                                
	char name[10];                                                          
	int  kor;                                                               
	int  math;                                                              
	int  eng;                                                               
} Student;                                                                   
                                                                             
int main(void) {                                                             
	Student* ptr = 0x0;                                                     
                                                                             
	printf("sizeof(Student)=%d\n", sizeof(Student));                        
	printf("&(*ptr).no     =%p, %2d\n", &(*ptr).no,   &ptr->no);            
	printf("&(*ptr).name   =%p, %2d\n", &(*ptr).name, &ptr->name);          
	printf("&(*ptr).kor    =%p, %2d\n", &(*ptr).kor,  &ptr->kor);           
	printf("&(*ptr).math   =%p, %2d\n", &(*ptr).math, &ptr->math);          
	printf("&(*ptr).eng    =%p, %2d\n", &(*ptr).eng,  &ptr->eng);           
	printf("ptr  	        =%p, %2d\n", ptr, ptr);                         
	printf("ptr+1	        =%p, %2d\n", ptr + 1, ptr + 1);                 
	printf("ptr+2	        =%p, %2d\n", ptr + 2, ptr + 2);                 
	printf("ptr+3	        =%p, %2d\n", ptr + 3, ptr + 3);                 
                                                                             
	return 0;                                                               
}                                                                       
