// Сформировать новый массив из массива М(25)
// встречающихся в этом массиве только один раз.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int SIZE = 25;
    int M[SIZE];

    srand( time( nullptr ) );
    for(int i = 0; i < SIZE; ++i)
    {
        M[i] = rand() % 10;
    }

    printf("Started massiv : ");
    for(int i = 0; i < SIZE; ++i)
    {
        printf("%d ", M[i]);
    }
    printf("\n");

    int result_M[SIZE];
    int k = 0;
    for(int i = 0; i < SIZE; ++i)
    {
        int temp = M[i];
        bool found = false;
        for(int j = 0; j < SIZE && !found; ++j)
        {
            if (M[j] == temp && j != i)
            {
                found =true;
            }
        }
        if (!found)
        {
            result_M[k] = temp;
            ++k;
        }
    }

    printf("Result massiv : ");
    for(int i = 0; i < k; ++i)
    {
        printf("%d ", result_M[i]);
    }
    printf("\n");

    return 0;
}
