#include <string.h>
#include <math.h>
#include <stdio.h>

char* make_3_string( const char* str1, const char* str2 )
{
    const int size = fmax(strlen(str1), strlen(str2)) + 1;
    char* result = new char[size];
    memset(result, 0, size * sizeof(char));
    char* current_result = result;
    char* word_1 = new char[size];
    memset(word_1, 0, size * sizeof(char));
    char* word_2 = new char[size];
    memset(word_1, 0, size * sizeof(char));

    while(*str1 && sscanf(str1, "%s", word_1) != 0)
    {
        const char* current_str2 = str2;
        while(*current_str2 && sscanf(current_str2, "%s", word_2) != 0)
        {
            if (strcmp(word_1, word_2) == 0)
            {
                strcpy(current_result, word_1);
                current_result += strlen(word_1);
                *current_result = ' ';
                ++current_result;
            }
            current_str2 = strchr(current_str2, word_2[0]) + strlen(word_2);
        }
        str1 = strchr(str1, word_1[0]) + strlen(word_1);
    }
    --current_result;
    *current_result = '\0';

    delete[]word_2;
    delete[]word_1;
    return result;
}

void  destroy_3_string( char* str )
{
    delete [] str;
}
