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

long long itc_abs(long long num)
{
    if (num >= 0)
        return num;
    return -num;
}

double itc_pow(long long num, long long n)
{
    if (n == 0)
        return 1;
    long long res;
    res = num;
    for (int i = 1; i < itc_abs(n); i++)
    {
        res *= num;
    }
    if (n >= 0)
        return res;
    return 1.0 / res;
}
