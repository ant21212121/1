
#include <stdio.h>
#define DAYS 365
#define HOURS 24
#define TICKS 3600
int main()
{
    int years = 18;
    int days = DAYS*years;
    int hours = days*HOURS;
    int ticks = hours*TICKS;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d",ticks,hours,days,years);
    return 0;
}