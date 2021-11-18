#include "middle_str.h"

long long itc_len(string str)
{
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
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

