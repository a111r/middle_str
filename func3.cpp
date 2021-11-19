#include "middle_str.h"

bool itc_isIp(string str)
{
    int kol, number;
    kol = 0,number = 1;
    if (str == "")
        return "error";
    if (kol != 4)
        return false;
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            number = 10 * number + str[i] - 48;
        else
        {
            if (str[i] != 46)
                return false;
            if (number == 0)
                return false;
            if ((number % 1000) > 255 || (number % 1000) < 0)
                return false;
            kol++;
            number = 1;
        }
    }
    if (number == 0)
        return false;
    if ((number % 1000) > 255 || (number % 1000) < 0)
        return false;
    kol++;
    return true;
}

string itc_DecToBin(string str)
{
    return 0;
}

string itc_decToBase(int num, int base)
{
    return 0;
}
