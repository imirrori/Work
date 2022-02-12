// Сформировать новый массив из элементов массива М(25),
// встречающихся в массиве только один раз

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    constexpr int size = 25;
    int M[size];
    int resultM[size];
    int index_resultM = 0;

    srand(time(0));

    for(int i = 0; i < size; ++i)
    {
        M[i] = rand() % 10;
    }

    for(int i = 0; i < size; ++i)
    {
        printf("%d ", M[i]);
    }
    printf("\n");

    for(int i = 0; i < size; ++i)
    {
        bool found = false;
        for(int j = 0; j < size && !found; ++j)
        {
            if (i == j)
                continue;
            if (M[i] == M[j])
                found = true;
        }
        if (!found)
        {
            resultM[index_resultM] = M[i];
            ++index_resultM;
        }
    }

    for(int i = 0; i < index_resultM; ++i)
    {
        printf("%d ", resultM[i]);
    }
    printf("\n");


    return 0;
}
