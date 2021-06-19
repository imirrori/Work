// Заполнить матрицу А(7х8) по правилу:
// 0 - если сумма индексов четная
// 1 - если сумма индексов не четная

#include <stdio.h>

int main()
{
    constexpr int SIZE_X = 7;
    constexpr int SIZE_Y = 8;
    int A[SIZE_X][SIZE_Y];

    for(int i = 0; i < SIZE_X; ++i)
    {
        for(int j = 0; j < SIZE_X; ++j)
        {
            A[i][j] = ((i + j) & 0x1) ? 1 : 0;
        }
    }

    for(int i = 0; i < SIZE_X; ++i)
    {
        for(int j = 0; j < SIZE_X; ++j)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    return 0;
}
