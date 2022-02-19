#include "work.h"

void work(const char* src, char* dest)
{
    if (src == nullptr || dest == nullptr)
        return;

    const char* ch = src;
    char* result_ch = dest;

    char current = *ch;
    ++ch;
    *result_ch = *ch;
    ++result_ch;

    while(*ch != '\0')
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
}

