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
    if (str == "")
        return 0;
	str += " ";
	bool notSymbol = false;
	int counter = 0;
	int strLen = itc_len(str);
	for (int i = 1; i < strLen; i++) 
        {
		if (str[i] == ' ' && (str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i - 1] >= 'A' && str[i - 1] <= 'Z')) 
		{
			if (!notSymbol) counter += 1;
                notSymbol = false;
		}
		else 
		{
			if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
			    notSymbol = true;
		}
	}
	return counter
}
