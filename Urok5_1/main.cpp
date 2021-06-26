// даны две строки
// составить третью стороку из слов, имеющихся в данных строках
// "qqq www eee" "eee" - > "eee"

// 1. Функция, которая считает строку с клавиатуры. (2 раза)
// 2. Функция, сотавления 3 троки.
// 3. Тесты на функцию составления строки 3

#include <stdio.h>

#include "Functions.h"

int main()
{
    printf("Please enter first string: ");
    char str1[255];
    gets(str1);

    printf("Please enter second string: ");
    char str2[255];
    gets(str2);

    char* result_str = make_3_string( str1, str2 );
    printf("Result string is: %s\n", result_str);
    destroy_3_string( result_str );


    return 0;
}
