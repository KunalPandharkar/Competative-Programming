#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    string s = bitset<32>(n).to_string();
    return count(s.begin(), s.end(), '1');
}

int main()
{
    uint32_t N;
    cin >> N;
    cout << hammingWeight(N);
}