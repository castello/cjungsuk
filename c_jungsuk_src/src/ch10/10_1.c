#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int ch;                                                       
                                                                   
	do {                                                          
		printf("���� �ϳ��� �Է����ּ���.(����:x)>");                 
		ch = getchar();                                       
                                                                   
		printf("�Է��Ͻ� ���ڴ� '%c'�Դϴ�.\n", ch);                
                                                                   
		while (getchar() != '\n'); // �Է� ���۸� ����.          
	} while(ch!='x' && ch!='X');  	// 'x'�Ǵ� 'X'�� �Է��ϸ� �ݺ� ����  
                                                                   
	printf("'%c'�� �Է��ϼż� ����Ǿ����ϴ�.\n", ch);                    
                                                                   
	return 0;                                                     
}                                                                  