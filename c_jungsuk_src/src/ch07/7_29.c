 #include <stdio.h>                                                       
 #include <string.h>                                                      
                                                                          
 int main(void) {                                                         
 	char* str1     = "abc";                                             
 	char* str2     = "abc";                                             
 	char  chArr1[] = "abc";                                             
 	char  chArr2[] = "abc";                                             
                                                                          
 	printf("str1  =\"%s\"\n", str1);                                    
 	printf("str2  =\"%s\"\n", str2);                                    
 	printf("chArr1=\"%s\"\n", chArr1);                                  
 	printf("chArr2=\"%s\"\n", chArr2);                                  
                                                                          
 	printf("str1  =%p\n", str1);                                        
 	printf("str2  =%p\n", str2);                                        
 	printf("chArr1=%p\n", chArr1);                                      
 	printf("chArr2=%p\n", chArr2);                                      
                                                                          
 	printf("str1==str2 ? %d\n",     str1==str2);                        
 	printf("chArr1==chArr2 ? %d\n", chArr1==chArr2);                    
 	printf("str1==chArr1 ? %d\n",   str1==chArr1);                      
 	printf("strcmp(str1, str2)=%d\n",       strcmp(str1, str2));        
 	printf("strcmp(strArr1, strArr2)=%d\n", strcmp(chArr1, chArr2));    
 	printf("strcmp(str1, strArr1)=%d\n",    strcmp(str1, chArr1));      
 	printf("strcmp(str1, \"ABC\")=%d\n",    strcmp(str1, "ABC"));       
                                                                          
 	if(chArr1==chArr2)                                                  
 		printf("chArr1과 chArr2는 주소가 같습니다.\n");                   
 	else                                                                
 		printf("chArr1과 chArr2는 주소가 다릅니다.\n");	            
                                                                          
 	if(strcmp(chArr1, chArr2)==0)                                       
 		printf("chArr1과 chArr2는 내용이 같습니다.\n");                   
 	else                                                                
 		printf("chArr1과 chArr2는 내용이 다릅니다.\n");	            
                                                                          
 	return 0;                                                           
 }                                                                        
