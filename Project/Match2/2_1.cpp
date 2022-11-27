//
// Created by 彭科 on 2022/11/27.
//
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> add = vector<int>(n + 1);
        int total = 0;
        for(int i = 1; i <= n; i++)
        {
            add[i] = i + total;
            total += i;
        }

        int ans = -1;
        for(int i = 1; i <= n; i++)
        {
            if(add[i] == total - add[i] + i)
            {
                return i;
            }
        }
        return ans;
    }
};