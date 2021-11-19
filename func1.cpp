#include "middle_str.h"

bool itc_isDigit(unsigned char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

unsigned char itc_toUpper(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ' ';
    return c;
}

unsigned char itc_changeCase(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ' ';
    if (c >= 'A' && c <= 'Z')
        return c + ' ';
    return c;
}

bool itc_compare(string s1, string s2)
{
    long long len1, len2;
    len1 = itc_len(s1);
    len2 = itc_len(s2);
    long long i;
    i = 0;
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
	long long len, kol;
	len = itc_len(str);
	if (str == "")
        return 0;
	else if (((str[0] >= 'A') && (str[0] <= 'Z')) || ((str[0] >= 'a') && (str[0] <= 'z')))
        kol = 1;
	else kol = 0;
	for (int i = 1; i < len; i++)
	{
		if (i + 1 != len && !(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) && (str[i] != ' ')
			&& (((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')) || ((str[i - 1] >= 'a') && (str[i - 1] <= 'z')))
			&& (((str[i + 1] >= 'A') && (str[i + 1] <= 'Z')) || ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))))
			kol -= 2;
		else if (!(((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')) || ((str[i - 1] >= 'a') && (str[i - 1] <= 'z'))) && (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))))
			kol++;

	}
	return kol;
}
