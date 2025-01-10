// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the n-th Fibonacci number: ";
//     cin >> n;

//     if (n == 0) {
//         cout << "The value of 0th Fibonacci number is 0" << endl;
//         return 0;
//     }
//     if (n == 1) {
//         cout << "The value of 1st Fibonacci number is 1" << endl;
//         return 0;
//     }

//     vector<int> dp(n+1);

//     // Correct initialization for Fibonacci sequence
//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++) {
//         dp[i] = dp[i-1] + dp[i-2]; // Tabulation approach
//     }

//     cout << "The value of " << n << "-th Fibonacci number is " << dp[n] << endl;
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "hello";
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        char s2 = s1[i];
        cout << s2 << endl;
        s1[i] = s1[n - i - 1];
        cout << s1 << endl;
        s1[n - i - 1] = s2;
        cout << s1[n - i - 1] << endl;
    }
    cout << s1 << endl;

    return 0;
}