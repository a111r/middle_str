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
    if (itc_len(s1) != itc_len(s2))
        return false;
    for (long long i = 0; i != itc_len(s1) - 1; i++) if (s1[i] != s2[i])
        return false;
    return true;
}

int itc_countWords(string str)
{
    int answer = 0;
    str += ' ';
    for (int i = 0; str[i + 1] != '\0'; i++)
    {
        if (itc_isLetter(str[i]) && !itc_isLetter(str[i + 1])) answer++;
    }
    return answer;
}
