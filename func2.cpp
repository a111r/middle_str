#include "middle_str.h"

string itc_maxCharWord(string str)
{
    long long len ,schet;
    len = itc_len(str);
    schet = 0;
    string a;
    string result = "";
    for(int i = 0; i < len + 1; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            a += str[i];
        if((str[i] == ' ' || str[i] == '\0') && (itc_len(a) > itc_len(result)))
        {
            result = a;
            a = "";
        }
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            a = "";
            schet++;
        }
    }
    if(schet == 0)
        return "error";
    return result;
}

char itc_sameChar(string str)
{
	int number;
	number = itc_len(str);
	for (int i = 0; i < number; i++)
		if (str[i]!= ' ')
			for (int j = 0; j < i; j++)
				if (str[i] == str[j])
                    return str[i];

	return '\0';
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
