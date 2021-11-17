#include "middle_str.h"

bool itc_isDigit(unsigned char c)
{
    if ( c >= '0' && c <= '9')
    {
        return true;
    }
    return false;
}

unsigned char itc_toUpper(unsigned char c)
{
    if ( c >= 'a' && c <= 'z')
    {
        return c - ' ';
    }
    return c;
}

unsigned char itc_changeCase(unsigned char c)
{
    if ( c <= 'z' && c >= 'a')
    {
        return c - ' ';
    }
    else if(c <= 'Z' && c >= 'A')
    {
        return c + ' ';
    }
    else{
        return c;
    }
}

bool itc_compare(string s1, string s2)
{
    for (long long i = 0; i < itc_len(s1); i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
            break;
        }

    }
    return true;
}

int itc_countWords(string str)
{
    long long counter = 0;
    for(long long i = 1; str[i] < '\0';  i++)
    {
        if (str[i] == ' ' && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            counter += 1;
        }

    }
    if (str[itc_len(str) - 2] == ' ')
    {
        counter -= 1;
    }
    if (str[0] == ' ')
    {
        counter -= 1;
    }
    return counter;
}
