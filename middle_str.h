#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

long long itc_len(string str);
long long itc_str_to_int(string str);
long long itc_covert_num(long long num, int ss);
string itc_int_to_str(long long num);

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);

#endif // MIDDLE_STR_H_INCLUDED
