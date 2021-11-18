#include "middle_str.h"
long long itc_len(string str)
{
    long long res = 0;
    int i = 0;
    while (str[i] != '\0'){
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

string itc_slice_str(string str, int start, int end)
{
    string result;
    result = "";
    if ( end >= itc_len(str))
        end = itc_len(str) - 1;
    if(start > end)
        return str;
    else if(start == (itc_len(str) - 1))
    {
        result += str[itc_len(str) - 1];
        return result;
    }
    else
    {
        for ( long long i = start; i <= end; i++)
        {
        result += str[i];
        }
    return result;
    }

    return "-1";
}
