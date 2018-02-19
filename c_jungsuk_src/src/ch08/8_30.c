 #include <stdio.h>                                              
 #include <stdlib.h>                                             
                                                                 
 typedef void(FUNC_T)(void);  //  void(void)타입을 FUNC_T로 정의     
                                                                 
 void f1(void) { printf("f1() is called.\n"); }                  
 void f2(void) { printf("f2() is called.\n"); }                  
                                                                 
 //void(**makeFuncPtrArr(void))(void) {                          
 FUNC_T** makeFuncPtrArr(int size) {                             
 	FUNC_T** fpArr = calloc(size, sizeof(FUNC_T*)); // 동적 할당  
                                                                 
 	return fpArr;                                              
 }                                                               
                                                                 
 int main(void) {                                                
 //	void(**fpArr)(void) = makeFuncArr(5);                      
 	FUNC_T** fpArr = makeFuncPtrArr(5);                        
                                                                 
 	fpArr[0] = f1;                                             
 	fpArr[1] = f2;                                             
                                                                 
 	// 함수 포인터 배열에 저장된 모든 함수를 호출                         
 	while(*fpArr) {   // while(*fpArr!=NULL) {                 
 		(*fpArr)();                                        
 		fpArr++;                                           
 	}                                                          
                                                                 
 	return 0;                                                  
 }                                                               
