#include "middle_str.h"

string itc_maxCharWord(string str)
{
    int strLen, counter;
    strLen = itc_len(str);
    counter = 0;
    string newWord = "";
    string res = "";
    for(int i = 0; i < strLen + 1; i++){
        if((str[i] == ' ' or str[i] == '\0') && (itc_len(newWord) > itc_len(res)))
        {
            res = newWord;
            newWord = "";
        }
        if((str[i] >= 'A' and str[i] <= 'Z') || (str[i] >= 'a' and str[i] <= 'z'))
        {
            newWord += str[i];
        }
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            newWord = "";
            counter += 1;
        }
    }
    if(counter == 0)
    {
        return "error";
    }
    return res;
}

char itc_sameChar(string str)
{
    int counter, i ;
    counter = 0, i = 0;

    while(str[i] != '\0')
    {
        int j = 0;
        while (str[j] != '\0')
        {
            if(str[i] == str[j])
            {
                counter += 1;
            }
            j += 1;
        }
        if(counter == 2)
        {
            return str[i];
        }
        counter = 0;
        i += 1;
    }
    return -1;
}

bool itc_isFirstInSecond(string s1, string s2)
{
    if(s1 == "" or s2 == "")
        return false;
    for(int i = 0; itc_len(itc_slice_str(s2, i, i + itc_len(s1) - 1)) == itc_len(s1); i++)
    {
        if(itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1)
            return true;

    }
    return false;
}

string itc_Cezar(string str, int k)
{
	k = (k % 26 + 26) % 26;
	for (int i = 0; str[i] != '\0'; i++)
	{
        if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + k) % 26 + 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + k) % 26 + 'a';
	}
	return str;
}

string itc_rmFreeSpace(string str)
{
	string str1 = "";
	int n;
	n = 0;
	for (int i = 0; str[i] != '\0'; i++)
		if (!(str[i] == ' ' && str[i + 1] == ' ' || str[i] == ' ' && str[i + 1] == '\0' || n == 0 && str[i] == ' '))
			str1 += str[i], n++;
	return str1;
}

bool itc_isIp(string str)
{
    int i = 0;
    int counter = 0;
    int lastDot = 0;
    string num;
    int intNum, numLen, ip = 0, symb;
    while (str[i] != '\0')
        {
       if (str[i] == '.')
       {
            num = itc_slice_str(str, lastDot, i - 1);
            lastDot = i + 1;
            counter += 1;
            numLen = itc_len(num);
            for (int i = 0; i < numLen; i++)
            {
                if (!itc_isDigit(num[i]))
                     return false;
                symb = num[i] - 48;
                ip += symb * itc_pow(10, numLen - i - 1);
            }
            if (ip < 0 || ip > 255)
                return false;
            ip = 0;
       }
       i += 1;
    }
    num = itc_slice_str(str, lastDot, i - 1);
            lastDot = i + 1;
            counter += 1;
            numLen = itc_len(num);
            for (int i = 0; i < numLen; i++)
            {
                if (!itc_isDigit(num[i]))
                return false;
                symb = num[i] - 48;
                ip += symb * itc_pow(10, numLen - i - 1);
            }
            if (ip < 0 || ip > 255)
                return false;
    if (counter != 4)
        return false;
    return true;
}
