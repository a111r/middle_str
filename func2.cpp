#include "middle_str.h"

string itc_maxCharWord(string str)
{

	if (itc_countWords(str) <= 1) 
        return "error";
	long long max, len;
	max = 0;
	len = itc_len(str);
	string temp, otv;
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
		    temp += str[i];
		else if (itc_len(temp) > max)
            {
                max = itc_len(temp); otv = temp; temp = ""; 
            } 
		else 
            temp = "";
	}
	if (itc_len(temp) > max) 
        otv = temp;
	return otv;
}

char itc_sameChar(string str)
{
    long long len;
    len = itc_len(str);
    int count;
    count = 0;
    char result;
    for(int i = 0; i < len; i++){
        for(int j = i; j < len; j++)
        {
            if(str[i] == str[j])
                {
                count++;
            }
        }
        if(count == 2)
            {
            return str[i];
        }
        count = 0;
    }
    return 0;
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
