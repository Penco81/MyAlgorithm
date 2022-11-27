//
// Created by 彭科 on 2022/11/26.
//
#include<string>
#include<vector>
using namespace  std;

class Solution {
public:
    int countPalindromes(string s) {
        int len = s.size();
        long long dp[len][len];
        long long number = 10e7 + 9;
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < len; i++) {
            dp[i][i] = 1;
            if (i == len - 1)
                break;

            if (s[i] == s[i + 1])
                dp[i][i + 1] = 3;
            else
                dp[i][i + 1] = 2;
        }

        for (int start = 0; start < len - 5; start++) {
            int end = start + 5 - 1;
            if (s[end] == s[start]) {
                dp[start][end] = 1 + dp[start + 1][end] + dp[start][end - 1];
            }
            else {
                dp[start][end] = dp[start + 1][end] + dp[start][end - 1] - dp[start + 1][end - 1];
            }
        }

        long long res = 0;
        for(int i = 0; i < len - 5; i++)
        {
            res = (res + dp[i][i+5] % number) % number;
        }

        return res;
    }
};