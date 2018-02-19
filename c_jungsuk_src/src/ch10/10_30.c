#include <stdio.h>

#define CURRENCY_KR "won"          
#define CURRENCY_kr CURRENCY_KR   // 국가 코드(KR)가 대소문자 모두 가능하도록 추가
#define CURRENCY_US "dollar"
#define CURRENCY_us CURRENCY_US

#define DATE_FORMAT_KR "YYYY/MM/DD"
#define DATE_FORMAT_US "MM/DD/YY"

#define call(fn, na)  get_ ## fn ## _ ## na ## ()
#define getCurrency(na) CURRENCY_ ## na

void get_dateFormat_kr(void) { 
	printf("get_dateFormat_kr() :%s\n", DATE_FORMAT_KR); 
}

void get_dateFormat_us(void) {
	printf("get_dateFormat_us() :%s\n", DATE_FORMAT_US); 
}

int main(void) {
	call(dateFormat, kr);  // get_dateFormat_kr();
	call(dateFormat, us);  // get_dateFormat_us();
	printf("currency of %s : %s\n", "KR", getCurrency(KR)); // CURRENCY_KR
	printf("currency of %s : %s\n", "us", getCurrency(us)); // CURRENCY_us
	return 0;
}
