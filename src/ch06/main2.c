#include <stdio.h>                                                                                 
#include "header.h"                                                                                
                                                                                                   
int main(void) {                                                                                   
	int dan = getUserInput();  // int getUserInput(void)를 호출                                     
                                                                                                   
	if(2 <= dan && dan <= 9) {                                                                    
		printGugudan(dan); 	// void printGugudan(int dan)을 호출                            
	} else {                                                                                      
		printGugudanAll();  	// void printGugudanAll(void)을 호출                            
	}                                                                                             
                                                                                                   
	return 0;                                                                                     
}                                                                                                  
                                                                                                   
