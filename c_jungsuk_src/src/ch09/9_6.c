 #include <stdio.h>                                                           
                                                                              
 struct person {                                                              
 	char phoneNo[14];    // 전화번호 13자리 + 널 문자                             
 	char name[10];                                                          
 	struct person* next; // 연락할 사람                                        
 };                                                                           
                                                                              
 int main(void) {                                                             
 	struct person p1 = { "010-1111-2222","이몽룡" };                          
 	struct person p2 = { "010-2222-3434","성춘향" };                          
 	struct person p3 = { "010-3333-1212","홍길동" };                          
                                                                              
 	p1.next = &p2;                                                          
 	p2.next = &p3;                                                          
                                                                              
 	printf("name=%s(%s)\n", p1.name, p1.phoneNo);                           
 	printf("next person's name=%s(%s)\n", p1.next->name, p1.next->phoneNo); 
 	printf("second next person's name=%s(%s)\n",                            
                         p1.next->next->name, p1.next->next->phoneNo);        
                                                                              
 	return 0;                                                               
 }                                                                            
