// проверить на полиндром.

#include <stdio.h>
#include <string.h>


int main()
{
    char Str[255];
    scanf("%s", Str);

    bool polindrome = true;
    for(unsigned int i = 0; i < strlen(Str) && polindrome; ++i)
    {
        polindrome = Str[i] == Str[strlen(Str) - 1 - i];
    }

    printf("%s\n", polindrome ? "polindrome" : "not polindrome");
}
