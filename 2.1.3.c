#include <stdio.h>

int main()
{
int day, month;
day=15;
month=11;
day=day-month; month=month+day; day=month-day;
printf("Date: %d/%d",day,month);
return 0;
}