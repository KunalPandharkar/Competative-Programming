#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    int mul = 1;
    int sum = 0;
    while (n > 0)
    {
        mul *= n % 10;
        sum += n % 10;
        n = n / 10;
    }
    return mul - sum;
}

int main()
{
    int N;
    cin >> N;
    cout << subtractProductAndSum(N);
}