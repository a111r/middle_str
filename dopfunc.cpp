#include "middle_str.h"

long long itc_len(string str)
{
    long long len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    return len;
}


string itc_slice_str(string str, int start, int end)
{
    long long len = itc_len(str);
    string result;
    if((end > len) && (start < len))
    {
        for(int i = start; i < len; i++)
            {
            result = result + str[i];
        }
        return result;
    }
    if(start > end)
        {
        return str;
        }
    for(int i = start; i <= end; i++)
    {
        result = result + str[i];
    }
    return result;
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

