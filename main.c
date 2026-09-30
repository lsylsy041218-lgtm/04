#include <stdio.h>

int main(int argc, char *argv[])
{
    int second;
    int hour, minute, remain_second;

    printf("input the second : ");
    scanf("%i", &second);

    hour = second / 3600;
    minute = (second % 3600) / 60;
    remain_second = second % 60;

    printf("The time for %i second is %i : %i : %i\n", second, hour, minute, remain_second);

    return 0;
}