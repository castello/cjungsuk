#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	char*   pc = (char*) 0x100;                                            
	short*  ps = (short*)0x100;                                            
	int*    pi = (int*)  0x100;                                            
                                                                            
	printf("sizeof(char)  =%d\n", sizeof(char));                           
	printf("sizeof(short) =%d\n", sizeof(short));                          
	printf("sizeof(int)   =%d\n", sizeof(int));                            
	printf("pc++=0x%x\tps++=0x%x\tpi++=0x%x\n", pc++, ps++, pi++);         
	printf("pc++=0x%x\tps++=0x%x\tpi++=0x%x\n", pc++, ps++, pi++);         
	printf("pc++=0x%x\tps++=0x%x\tpi++=0x%x\n", pc++, ps++, pi++);         
	printf("pc++=0x%x\tps++=0x%x\tpi++=0x%x\n", pc++, ps++, pi++);         
	printf("pc++=0x%x\tps++=0x%x\tpi++=0x%x\n", pc++, ps++, pi++);         
	return 0;                                                              
}                                                                           
                                                                            
