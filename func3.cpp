#include "middle_str.h"

bool itc_isIp(string str)
{
    int kol, number;
    kol = 0, number = 1;
    if (str == "")
        return "error";
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
    if (kol != 4)
        return false;
    return true;
}
