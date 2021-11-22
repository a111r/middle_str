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
	long long ind = 0, st1 = itc_len(str1), st2 = itc_len(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}
