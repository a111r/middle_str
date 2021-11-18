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

long long itc_pow(int n, int i)
{
    if (i == 0)
        return 1;
    else
        return n * itc_pow(n, i - 1);
}

int itc_stop(string str)
{
    int st = int(itc_len(str));
    int answer = 0;
    for (int i = 0; i < itc_len(str); i++) {
        answer += (str[i] - 48) * itc_pow(10, st - 1);
        st--;
    }
    return answer;
}

string convertToBin(string str)
{
    string answer = "";
    for (int dec = itc_stop(str); dec > 0; dec /= 2)
        answer = char(dec % 2 + '0') + answer;
    return answer;
}

string convertToBin(string str)
{
    string answer = "";
    for (int dec = itc_stop(str); dec > 0; dec /= 2)
        answer = char(dec % 2 + '0') + answer;
    return answer;
}
