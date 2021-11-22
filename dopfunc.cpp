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

int itc_find_str(string str1, string str2)
{
    long long len1 = itc_len(str1), len2 = itc_len(str2), counter, i1 = 0, i2 = 0;
    while (i1 < len1){
        counter = 0;
        if (str1[i1] == str2[0]){
        for (long long i2 = 0; i2 < len2; i2++){
            if (str1[i1 + i2] == str2[i2])
                counter += 1;}}
        if (counter == len2)
            return i1;
    i1++;}
    return -1;}
