//
// Created by 彭科 on 2023/3/2.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits.size());
        int plus = 1;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            int all = plus + digits[i];
            int cur = all % 10;
            plus = all / 10;
            res.push_back(cur);
        }
        if(plus != 0)
            res.push_back(plus);
        reverse(res.begin(), res.end());

        return res;
    }
};

