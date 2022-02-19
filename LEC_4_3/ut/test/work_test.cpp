#include "gtest/gtest.h"

#include "../../work.h"

TEST( TestForLEC4_3, WorkTest_1 )
{
    const char* str = "AAABBBCCC";
    const char* result_str = "ABC";

    char result[255];
    work(nullptr, nullptr);

    EXPECT_STREQ( result, result_str );
}

TEST( TestForLEC4_3, WorkTest_2 )
{
    const char* str = "A";
    const char* result_str = "A";

    char result[255];
    work(str, result);

    EXPECT_STREQ( result, result_str );
}


TEST( TestForLEC4_3, WorkTest_3 )
{
    const char* str = "";
    const char* result_str = "";

    char result[255];
    work(str, result);

    EXPECT_STREQ( result, result_str );
}


TEST( TestForLEC4_3, WorkTest_4 )
{
    const char* str = "aAbBBa";
    const char* result_str = "aAbBa";

    char result[255];
    work(str, result);

    EXPECT_STREQ( result, result_str );
}
