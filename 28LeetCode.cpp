#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.empty())
        return 0;

    int32_t found = haystack.find(needle);

    if (found != string::npos)
        return found;

    return -1;
}

int main()
{
    string str = "hello kunal";
    char *cstr = new char[str.length() + 1];
    std::strcpy(cstr, str.c_str());

    char *p = std::strtok(cstr, " ");

    while (p != 0)
    {
        cout << p << endl;
        p = strtok(NULL, " ");
    }
    string s1, s2;
    cin >> s1 >> s2;

    cout << strStr(s1, s2);
}
