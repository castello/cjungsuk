#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	char* filename1 = "c:\\work\\ch11\\data.bin";                 
	char* filename2 = "c:\\work\\ch11\\data.txt";                 
                                                                   
	FILE* fwb = fopen(filename1, "wb");                           
	FILE* fwt = fopen(filename2, "wt");                           
                                                                   
	FILE* frb = fopen(filename1, "rb");                           
	FILE* frt = fopen(filename2, "rt");                           
                                                                   
	char* str = "AB12";                                           
	int   i = 12;                                                 
	float f = 12.625f;                                            
	int   ch;                                                     
                                                                   
	// data.bin에 쓰기                                              
	fwrite(str, sizeof(char), strlen(str), fwb);                  
	fwrite(&i,  sizeof(int),  1, fwb);                            
	fwrite(&f,  sizeof(float), 1, fwb);                           
                                                                   
	// data.txt에 쓰기                                              
	fprintf(fwt, "%s%d%6.3f", str, i, f);                         
                                                                   
	fclose(fwb);                                                  
	fclose(fwt);                                                  
                                                                   
	// data.bin에서 읽기                                             
	printf("= %s =\n", filename1);                                
	while ((ch = fgetc(frb)) != EOF) // fgetc()로 1 byte씩 읽어서 출력
		printf("%02X %c\n", ch, ch);                          
	printf("\n\n");                                               
                                                                   
	// data.txt에서 읽기                                             
	printf("= %s =\n", filename2);                                
	while ((ch = fgetc(frt)) != EOF)                              
		printf("%02X %c\n", ch, ch);                          
	printf("\n");                                                 
                                                                   
	fclose(frb);                                                  
	fclose(frt);                                                  
	return 0;                                                     
}                                                                  
                                                                   
