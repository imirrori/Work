// Заполнить матрицу А(7х8) нулями и единицами по следующему правилу:
// 0 - если сумма индексов элемента четная
// 1 - если сумма индексов элемента не четная

#include <stdio.h>

int main()
{
    constexpr int X = 7;
    constexpr int Y = 8;
    int A[X][Y];

    for(int i = 0; i < X; ++i)
    {
        for(int j = 0; j < Y; ++j)
        {
            A[i][j] = ((i + j) & 1) ? 1 : 0;
        }
    }

    for(int i = 0; i < X; ++i)
    {
        for(int j = 0; j < Y; ++j)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
