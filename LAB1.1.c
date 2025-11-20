#include <stdio.h>

int main()
{
    int N, i;

    if (scanf("%d", &N) != 1)
    {
        return 1;
    }
    if (N < 1)
    {
        printf("Error");
        return 1;
    }

    for (i = 0; i < N; i++)
    {
        printf("hello loop\n");
    }

    return 0;
}
