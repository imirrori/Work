// Дана строка символов.
// Удалить из нее все кратные рядом стоящие символы, оставив по одному
// AAABBBCCC -> ABC

#include "work.h"

#include <stdio.h>

int main()
{
    char str[255];
    fgets(str, 254, stdin);

    char result_str[255];
    work(str, result_str);

    puts(result_str);

    return 0;
}
