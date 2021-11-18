#include "middle_str.h"

long long itc_len(string str)
{
    long long res ;
    int i;
    res = 0, i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool isLetter(char word)
{
    return word >= 'a' && word <= 'z' || word >= 'A' && word <= 'Z';
}

bool isValidWord(string str)
{
    bool isValid = true;
    if(str == "")
        return false;
    if (!isLetter(str[0]))
        return false;
    int number;
    number = 1;
    for (int i = 0; str[i+1]!='\0'; i++, number++)
    {
        if (!isLetter(str[i]) && isValid)
        return false;
    }

    if(!isLetter(str[number - 1]))
        return str[number - 1] == '.' || str[number - 1] == ',' || str[number - 1] == '?' || str[number - 1] == '!';

    return true;
}

string itc_slice_str(string str, int start, int end1)
{
    string result;
    result = "";
    if (end1 >= itc_len(str))
        end1 = itc_len(str) - 1;
    if(start > end1)
        return str;
    else if(start == (itc_len(str) - 1))
    {
        result += str[itc_len(str) - 1];
        return result;
    }
    else
    {
        for (long long i = start; i <= end1; i++)
        {
        result += str[i];
        }
    return result;
    }

    return "-1";
}
