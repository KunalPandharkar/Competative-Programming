#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int revnumber = 0;

    while (x != 0)
    {
        int lastdigit = x % 10;

        if (revnumber > INT_MAX / 10 || revnumber < INT_MIN / 10)
            return 0;

        revnumber = revnumber * 10 + lastdigit;
        x = x / 10;
    }

    return revnumber;
}

int main()
{
    int N;
    cin >> N;

    cout << reverse(N);
}
