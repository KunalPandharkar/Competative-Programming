#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int type = 1;
    bool flag = true;
    long int num = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
            continue;

        if ((s[i] == '-' || s[i] == '+') && flag)
        { //  s = " 23 hello kunal12 12+";
            type = (s[i] == '-') ? -1 : 1;
            flag = false;
            i++;
        }

        if (!isdigit(s[i]))
        {
            break;
        }

        while (i < s.length())
        {
            if (!isdigit(s[i]) || s[i] == ' ')
                return num * type;

            num = (num * 10) + (int)(s[i] - 48);

            if ((num * type) > INT_MAX)
            {
                cout << num << endl;
                cout << INT_MAX - 1;
                if (num <= INT_MAX - 1)
                    return num;
                return INT_MAX; // 2147483647
            }

            if ((num * type) < INT_MIN)
            {

                if (num * 10 < INT_MIN)
                    return num * type;
                return INT_MIN; // -2147483648
            }
            i++;
        }
    }

    return num * type;
}

int main()
{
    string s = "2147483646"; //"2147483646"
    // string s = "-91283472332";

    cout << myAtoi(s);
}
