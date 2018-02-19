#include <stdio.h>

int isLeapYear(int year);  // 지정된 year가 윤년(leap year)이면 1, 아니면 0을 반환 
int dateToDay(int year, int month, int day); // 지정된 날짜(년월일)를 일 단위로 변환

int main(void) {
	int year  = 2016;
	int month = 4;

	int sDay = dateToDay(year, month, 1);
	int eDay = dateToDay(year, month+1, 1);  // 다음달의 1일
	int yoil = 0; // 1일의 요일
	int i;

	printf("     %4d년 %2d월\n", year, month);
	printf(" SU MO TU WE TH FR SA\n");

	yoil = sDay%7; // 1일의 요일 계산

	for(i=0;i<yoil;i++)
		printf("   ");  // 1일 앞에 여백 출력.  

	for(i=1;i<=eDay-sDay;i++) {
		printf(" %2d", i);
		if((i+yoil)%7==0) printf("\n"); // 날짜를 7개 출력한 후에 줄바꿈
	}
	printf("\n");

	return 0;
}

int isLeapYear(int year) {
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

int dateToDay(int year, int month, int day) {
	int endDayOfMon[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int numOfLeapYear    = 0;  // 윤년의 수 
	int daySumToLastYear = 0;  // 1년 1월 1일 부터 전년도 까지의 일 수
	int daySumToLastMon  = 0;  // 해당 년도의 1월 1일부터 전달까지의 일 수
	int i;

	for (i=1;i<year;i++)
		if (isLeapYear(i)) 
			numOfLeapYear++;

	// 전년도까지의 일수를 구한다. 
	daySumToLastYear = (year-1)*365 + numOfLeapYear;

	if (month > 2 && isLeapYear(year))
		endDayOfMon[1]++; // 2월의 마지막 날을 1증가

	// 해당 년도의 전월까지의 일수 계산 
	for (i=0;i<month-1;i++)
		daySumToLastMon += endDayOfMon[i];

	return daySumToLastYear + daySumToLastMon + day;
}
