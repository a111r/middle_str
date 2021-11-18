#include "middle_str.h"

string itc_maxCharWord(string str)
{
	if (itc_countWords(str) < 2)
        return "error";
	str = itc_rmFreeSpace(str);
	string word = "";
	string answer = "";
	for (int i = 0, n = 0; str[i] != '\0'; i++)
	{
		if((str[i] != ' ' || str[i+1] == '\0') && !(str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?'))
            word += str[i], n++;
		if ((str[i] == ' ' || str[i + 1] == '\0') && isValidWord(word))
		{
			if (itc_len(word) > itc_len(answer))
			{
			answer = word;
			word = "";
			n = 0;
            }
		}
	}
	if (answer == "")
        answer = "error";
	return answer;
}

char itc_sameChar(string str)
{
    for (long long i = 0; str[i] != '\0'; i++)
        {
        if (( str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            for (long long j = 0; str[j] != '\0'; j++)
            {
                if ( str[j] == str[i])
                {
                    return str[j];
                }
            }
        }
    }
    return '0';
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
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + k) % 26 + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + k) % 26 + 'A';
	}
	return str;
}

string itc_rmFreeSpace(string str)
{
    long long i;
    i = 0;
    string str1 = "";
    while(str[i] != '\0')
    {
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            str1 += str[i];
        i++;
    }
    if (str1[0] == 32)
    str1 = itc_slice_str(str1, 1 , itc_len(str1) - 1);
    if((str1[itc_len(str1) - 1]) == 32)
        str1 = itc_slice_str(str1, 0 , itc_len(str1) - 2);
    return str1;
}
