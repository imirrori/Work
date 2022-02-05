// Дано натуральное число N
// Вывести все натуральные числа, на которые делится N, без остатка.

#include <stdio.h>

int main()
{
    unsigned long long int N;
    printf("Please enter N: ");
    scanf("%llu", &N);
    for (unsigned long long int i = 1; i < N; ++i)
    {
        if ((N % i) == 0)
        {
            printf("%llu\n", i);
        }
    }
}
