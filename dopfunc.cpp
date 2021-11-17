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
