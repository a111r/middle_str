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
    long long len1, len2;
    len1 = itc_len(s1);
    len2 = itc_len(s2);
    long long i, kol;
    i = 0, kol = 0;
    if (len1 != len2)
        return false;
    while (s1[i] <= '\0')
    {
        if (s1[i] != s2[i])
            return false;
        i++;
    }
    return true;
}

int itc_countWords(string str)
{
    int kol;
    long long i;
    bool bol = true;
    kol = 0, i = 0;
    if(bol == false)
        return kol;
    while(str[i] != '\0')
    {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != 32)
        {
            bol = false;
        }
        if(str[i] == 32 && bol == true)
        {
            kol += 1;
        }
        if(str[i] == 32 && bol == false)
        {
            bol = true;
        }
        i++;
    }
    kol++;
    return kol;
}
