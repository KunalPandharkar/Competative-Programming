// Police Station
// Input:
// N = 2, a = 1
// x = {4, 5}
// Output: 
// 7
// Explanation: 
// Only way is to choose first 
// station at 4 and 2nd station at 5.
// so |4 - 1| + |5 - 1| = 3 + 4 = 7


#include <bits/stdc++.h>
using namespace std;

int solve(int N, int a, vector<int> x)
{

    for (int i = 0; i < N; i++)

        x[i] = abs(x[i] - a);

    sort(x.begin(), x.end(), greater<int>());

    return x[0] + x[1];
}
int main()
{

    vector<int> el = {3, 10, 10, 6, 5, 3, 7, 5, 1};

    cout << solve(9, 1, el);

    return 0;
}

