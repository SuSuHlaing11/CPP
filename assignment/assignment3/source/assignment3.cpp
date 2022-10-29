#include <iostream>
#include <string>
#include <cctype>
using std::string;

int character(string s, auto size)
{
    int i = size;
    return i;
}

int word(string s, auto size)
{
    int w_count = 1;
    for (int i = 0; i < size; ++i)
    {
        if (isspace(s[i]))
        {
            ++w_count;
        }
    }
    return w_count;
}

string parlindrome(string s, auto size)
{
    string b;
    string c;
    int flag;
    for (int i = 0; i < size / 2; ++i)
    {
        b[i] = s[size - i - 1];
    }
    for (int i = 0; i < size / 2; ++i)
    {
        c[i] = s[i];
    }
    for (int i = 0; i < size / 2; ++i)
    {
        if (c[i] == b[i])
        {
            return "The string is parlindrome.";
        }
        else if (c[i] != b[i])
        {
            return "The string is not parlindrome.";
        }
    }
}

int main()
{
    string a;
    string s;
    int i;
    auto size = s.size();
    char b;
    std::cout << "Enter w or c to count the string." << std::endl;
    std::cin >> b;
    std::cout << "Enter the string." << std::endl;
    while (getline(std::cin, s))
    {
        size = s.size();
        a = s;
    }

    for (int i = 0; i < size; ++i)
    {
        a[i] = toupper(a[i]);
    }

    std::cout << "The reverse of the str ing is : " << std::endl;
    for (int i = size; i >= 0; --i)
    {
        std::cout << a[i];
    }
    std::cout << std::endl;
    std::cout << parlindrome(a, size) << std::endl;

    if (b == 'w')
    {
        std::cout << "The number of word in the string is : " << word(a, size) << std::endl;
    }
    else if (b == 'c')
    {
        std::cout << "The number of character in the string is : " << character(a, size) << std::endl;
    }

    return 0;
}