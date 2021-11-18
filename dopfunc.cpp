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

long long itc_covert_num(long long num, int ss)
{
    long long number = 0, pow = 1;
    if (num < 0)
        return (itc_covert_num((num * -1), ss))* -1;
    while(num > 0){
        number += num % ss * pow;
        num /= ss;
        pow *= 10;
    }
    return number;
}

long long itc_str_to_int(string str)
{
    long long num, i;
    num = 0, i = 0;
    int ch = 0;
    while(str[i] != '\0'){
        ch = str[i] - 48;
        num = num * 10 + ch;
        i ++;
    }
    return num;
}

string itc_int_to_str(long long num)
{
    char chislo = '#';
    string str = "", strin = "";
    while(num > 0){
        chislo = (num % 10) + 48;
        str += chislo;
        num /=10;
    }
    for(long long i = (itc_len(str) - 1); i >= 0; i--){
        strin += str[i];
    }
    return strin;
}
