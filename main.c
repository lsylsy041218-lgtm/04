#include <stdio.h>

int main(int argc, char *argv[])
{
    int year;
    int is_leap;

    printf("input the year :");
    scanf("%i", &year);

    is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("is the year %i the leap year? : %i\n", year, is_leap);

    return 0;
}