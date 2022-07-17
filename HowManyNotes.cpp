#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TotalAmount;

    cin >> TotalAmount;

    int hundred = 0, fifty = 0, ten = 0;

    hundred = TotalAmount / 100;

    TotalAmount = TotalAmount % 100;

    fifty = TotalAmount / 50;

    TotalAmount = TotalAmount % 50;

    ten = TotalAmount / 10;

    cout << "100 = " << hundred << endl;
    cout << "50 = " << fifty << endl;
    cout << "10 = " << ten << endl;
}