 #include <stdio.h>                                                    
                                                                       
 int main(void) {                                                      
 	char c = 10;                                                     
 	int  i = 20;                                                     
                                                                       
 	char* pc = &c;                                                   
 	int*  pi = &i;                                                   
 	void *vp1, *vp2;                                                 
                                                                       
 	vp1 = pc;  //  vp1 = (void*)pc;                                  
 	vp2 = pi;  //  vp2 = (void*)pi;                                  
                                                                       
 	printf("vp1=%p\n", vp1);                                         
 	printf("vp2=%p\n", vp2);                                         
 	printf("*(int*)vp2=%d\n", *(int*)vp2);                           
 	printf("((char*)vp1)++=%p\n", ((char*)vp1)++);  		 
 	printf("(char*)vp1+1=%p\n", (char*)vp1 + 1);   		         
 	printf("(char*)vp1 - (char*)vp2=%d\n", (char*)vp1 - (char*)vp2); 
 	printf("vp1=%p\n", vp1);                                         
 	printf("vp2=%p\n", vp2);                                         
                                                                       
 	return 0;                                                        
 }                                                                     
