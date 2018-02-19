#include <stdio.h>

int isLeapYear(int year);  // 지정된 year가 윤년(leap year)이면 1, 아니면 0을 반환 
int dateToDay(int year, int month, int day); // 지정된 날짜(년월일)를 일 단위로 변환

int main(void) {
	char * week_day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	int year = 2016, month = 4, day = 1;
	int totalDay = dateToDay(year, month, day);

	// 두 날짜의 차이를 일(day)단위로 구한다.
	int dayDiff = dateToDay(2016,2,28) - dateToDay(2016,3,2);

	printf("year=%d, month=%d, day=%d\n", year, month, day);
	printf("totalDay=%d\n", totalDay);
	printf("%d.%d.%d is %sDAY\n", year, month, day, week_day[totalDay%7]);
	printf("2016.2.28 - 2016.3.2 = %d\n", dayDiff);

	return 0;
}

int isLeapYear(int year) { 
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

int dateToDay(int year, int month, int day) {
	int endDayOfMon[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int numOfLeapYear    = 0; // 윤년의 수 
	int daySumToLastYear = 0; // 1년 1월 1일 부터 전년도 까지의 일 수
	int daySumToLastMon  = 0; // 해당 년도의 1월 1일부터 전달까지의 일 수
	int i;
 
	for (i=1;i<year;i++)
		if (isLeapYear(i)) 
			numOfLeapYear++;

	// 전년도까지의 일수를 구한다. 
	daySumToLastYear = (year - 1) * 365 + numOfLeapYear;
  
	if (month > 2 && isLeapYear(year))
		endDayOfMon[1]++; // 2월의 마지막 날을 1증가

	// 해당 년도의 전월까지의 일수 계산 
	for (i=0;i<month-1;i++)
		daySumToLastMon += endDayOfMon[i];

	return daySumToLastYear + daySumToLastMon + day;
}
