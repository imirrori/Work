#include "gtest/gtest.h"

#include "Functions.h"

TEST( testName, test1 )
{
    char* result = make_3_string( "qwe", "qwe" );
    EXPECT_STREQ( result, "qwe" );
    destroy_3_string( result );
}

TEST( testName, test2 )
{
    char* result = make_3_string( "qwe qwqwe", "qwe" );
    EXPECT_STREQ( result, "qwe" );
    destroy_3_string( result );
}

TEST( testName, test3 )
{
    char* result = make_3_string( "", "" );
    EXPECT_STREQ( result, "" );
    destroy_3_string( result );
}

TEST( testName, test4 )
{
    char* result = make_3_string( "qqq www eee", " eee" );
    EXPECT_STREQ( result, "eee" );
    destroy_3_string( result );
}

TEST( testName, test5 )
{
    char* result = make_3_string( "qqq www eee", " eee   www" );
    EXPECT_STREQ( result, "www eee" );
    destroy_3_string( result );
}
