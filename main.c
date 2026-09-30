#include <stdio.h>

int main(int argc, char *argv[])
{
    int second;
    int minute;
    int remain_second;

    printf("input the second :");
    scanf("%i", &second);

    minute = second / 60;
    remain_second = second % 60;

    printf("the time is %i : %i\n", minute, remain_second);

    return 0;
}