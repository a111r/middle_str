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
    len1 = itc_len(str1);
    len2 = itc_len(str2);
    long long i, kol;
    i = 0, kol = 0;
    if (len1 != len2)
        return false;
    while (str1[i] <= '\0')
    {
        if (str1[i] != str2[i])
            return false;
        i++;
    }
    return true;
}

int itc_countWords(string str)
{
	long long l = itc_len(str), kol = 1;
	for (int i = 0; i < l; i++) {
		if (str[i] == ' ') {
			kol++;
		}
	}
	return kol;
}
