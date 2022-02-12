// Дана строка символов.
// Удалить из нее все кратные рядом стоящие символы, оставив по одному
// AAABBBCCC -> ABC

#include <stdio.h>

int main()
{
    char str[255];
    fgets(str, 254, stdin);

    char result_str[255];

    char* ch = str;
    char* result_ch = result_str;

    char current = *ch;
    ++ch;
    *result_ch = *ch;
    ++result_ch;

    while(*ch != '\n')
    {
        if (*ch != current)
        {
            *result_ch = *ch;
            current = *ch;
            ++result_ch;
        }
        ++ch;
    }

    *result_ch = '\0';

    puts(result_str);

    return 0;
}
