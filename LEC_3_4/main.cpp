// проверить на полиндром.

#include <stdio.h>


int main()
{
    long long int N;
    long long int testN = 0;

    printf("Please enter N: ");
    scanf("%lld", &N);

    long long int temp = N;
    while(temp > 0)
    {
        testN *= 10;
        testN += temp % 10;
        temp /= 10;
    }

    printf("%s", N == testN ? "true" : "false");

    return 0;
}
