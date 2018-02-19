#include <stdio.h>                                            
                                                              
int main(void) {                                              
	printf("10 == 10.0f ? %d\n",  10==10.0f);             
	printf("'0'== 0   ? %d\n",    '0'== 0);               
	printf("'\\0'== 0  ? %d\n",   '\0'== 0);              
	printf("'A'== 65  ? %d\n",    'A'== 65);              
	printf("'A' > 'B' ? %d\n",    'A' > 'B');             
	printf("'A'+1 != 'B' ? %d\n", 'A'+1 != 'B');          
                                                              
	return 0;                                             
}                                                             
