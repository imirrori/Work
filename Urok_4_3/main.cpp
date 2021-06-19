// Дана строка символов. Удалить из нее все кратные стоящие друг с другом символы
// оставив по одному АААВВВССС->АВС

#include <stdio.h>

int main()
{
    char str[1];
    printf("Please enter string: ");
    gets(str);

    char* ch = str;
    printf("Result string: ");
    while(*ch)
    {
        if (*ch != *(ch + 1))
        {
            printf("%c", *ch);
        }
        ++ch;
    }
    printf("\n");

    return 0;
}
