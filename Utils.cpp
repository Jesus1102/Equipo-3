#pragma once
#include <iostream>
#include <regex>
using namespace std;

class Utils
{
public:
    Utils();
    static string toLowerCase(string &text);
    static bool isDate(string &date);
};

Utils::Utils()
{
}

string Utils::toLowerCase(string &text)
{
    string lowerCaseText = "";
    for (int i = 0; i < text.size(); i++)
    {
        lowerCaseText += tolower(text[i]);
    }
    return lowerCaseText;
}

bool Utils::isDate(string &date)
{
    regex dateRegex("^([0-2][0-9]|3[0-1])(\\/)(0[1-9]|1[0-2])\\2(\\d{4})$");
    smatch match;
    return regex_match(date, match, dateRegex);
}
