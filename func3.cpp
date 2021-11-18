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

string itc_DecToBin(string str)
{
	string a, answer;
	a = "", answer = "";
	for (int i = 0; i < itc_len(str); i++){
		if (itc_isDigit(str[i])) a += str[i];
		else {
			answer += convertToBin(a);
			answer += str[i];
			a = "";
		}
		if (i + 1 == itc_len(str)) {
			answer += convertToBin(a);
			a = "";
		}
	}
	return answer;
}
