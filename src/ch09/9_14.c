#include <stdio.h>                                                                  
#include <stdlib.h>                                                                 
#include <string.h>                                                                 
                                                                                    
typedef struct custInfo {  // 고객정보                                                 
	char custName[20];                                                             
	char phoneType; // 전화번호 종류                                                   
	union {                                                                        
		char homeNo[15];   // 유선전화(집)                                        
		char officeNo[15];   // 유선전화(직장)                                     
		char cellNo[15];   // 핸드폰                                             
	}; // 이름이 없는 공용체                                                            
} CustInfo;                                                                         
                                                                                    
void printCustInfoArr(CustInfo arr[], const int LEN);                               
void printCustInfo(CustInfo c);                                                     
                                                                                    
int main(void) {                                                                    
	CustInfo cust[] = {                                                            
		{ "CHOI", 'H', "02-1234-1234"  },                                      
		{ "LEE",  'M', "031-1111-2222" },                                      
		{ "KIM",  'O', "010-2222-1111" }                                       
	};                                                                             
                                                                                    
	const int LEN = sizeof(cust) / sizeof(cust[0]);                                
	printCustInfoArr(cust, LEN);                                                   
                                                                                    
	return 0;                                                                      
}                                                                                   
                                                                                    
void printCustInfoArr(CustInfo arr[], const int LEN) {                              
	int i;                                                                         
	for(i=0;i<LEN;i++) {                                                           
		printCustInfo(arr[i]);                                                 
		puts("");                                                              
	}                                                                              
}                                                                                   
                                                                                    
void printCustInfo(CustInfo c) {                                                    
	printf("이름:%s\n", c.custName);                                                
                                                                                    
	switch (c.phoneType) {                                                         
		case 'H':                                                              
			printf("집전화:%s\n", c.homeNo);                                 
			break;                                                         
		case 'O':                                                              
			printf("사무실전화:%s\n", c.officeNo);                            
			break;                                                         
		case 'M':                                                              
			printf("핸드폰:%s\n", c.cellNo);                                 
			break;                                                         
	}                                                                              
}                                                                                   
