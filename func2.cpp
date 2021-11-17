#include "middle_str.h"

string itc_maxCharWord(string str)
{
    long long max, length;
    max = -1;
    length = 0;
    string word = "";
    string answer = "";
    if (str == "")
        return "error";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            word += str[i];
            length ++;
        }
        else
        {
            if (max < length)
                answer = word;
            length = 0;
            word = "";
        }
    }
    if (max < length)
        answer = word;
    return answer;
}

char itc_sameChar(string str)
{
    for ( long long i = 0; str[i] != '\0'; i++)
        {
        if (( str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            for ( long long j = 0; str[j] != '\0'; j++)
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
    bool state;
    state = false;
    long long length ;
    length = 0;
    for (long long i = 0; s2[i] != '\0'; i++)
    {
        if (s1[length] == s2[i])
        {
            length ++;
        }
        else
        {
            state = (length == itc_len(s1));
            length = 0;
        }
    }
    state = (length == itc_len(s1));
    return state;
}

string itc_Cezar(string str, int k)
{
    int number;
    char chislo;
    string res;
    for ( long long i = 0; str[i] != '\0'; i++){
        number = str[i];
        if( number > 65 && number < 90)
        {
            if (number +  k > 90)
            {
                chislo = 64 + (number + k - 90);
            }
            else if ( chislo + k < 65)
            {
                chislo = 91 - (65 - number - k );
            }
            else
            {
            chislo = number +  k;
            }
        }
        else if(chislo > 97 && chislo < 122)
        {
            if ( number +  k  > 122)
            {
                chislo = 96 + (number + k - 122);
            }
            else if(number + k < 97)
            {
                chislo = 122 - (97 - number- k );
            }
            else
            {
                chislo = number + k;
            }
        }
        else
        {
            return "-1";
        }
        res += chislo;
    }
    return res;
    return "-1";
}

string itc_rmFreeSpace(string str)
{
    string word, slovo;
    word = "";
    slovo = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            slovo += str[i];
        }
        else
        {
            if (slovo != "")
                slovo = " ";
            word += slovo;
            slovo = "";
            word += str[i];
        }
    }
    return word;
}
