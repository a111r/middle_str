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
	string num = s1;
	s1 = num;
	s1 = s2;
	s2 = num;
	int dlina = itc_len(s1);
	int dlina1 = itc_len(s2);
	dlina = itc_len(s1);
	dlina1 = itc_len(s2);
	if (dlina < dlina1)
		return false;
	for (int i = 0; i < dlina - dlina1 + 1; i++){
		bool proverka = false;
		if (s1[i] == s2[0]) {
			proverka = true;
			for (int j = 1; j < dlina1; j++)
				if (s1[i + j] != s2[j])
					proverka = false;
		}
		if (proverka)
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
