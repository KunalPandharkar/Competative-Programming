#include <bits/stdc++.h>
using namespace std;

// decimal tp binary

// string decimalTobinary(int n)
// {
//     string binary;
//     while (n != 0)
//     {
//         binary.push_back((char)(n % 2) + '0');
//         n = n / 2;
//     }

//     reverse(binary.begin(), binary.end());

//     return binary;
// }

int main()
{
    int n;
    cin >> n;

    // using inbuilt bitset container
    // string binary = bitset<32>(n).to_string();
    // int find = binary.find('1');
    // if(find != string::npos)
    // binary.erase(binary.begin(),binary.begin() + find);
    // cout << binary << endl;

    //using bitwise &
    int binary = 0;
    int count = 0;
    while (n > -1) // 1 0 1
    {
        int dig = n & 1; // 1 0 1
        binary = (dig * pow(10,count)) + binary; 

        n = n >> 1;
        count++;
    }
    cout << binary;

    //cout << decimalTobinary(n);
}
