//
// Created by 彭科 on 2023/3/3.
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
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int preMin = INT32_MAX;
        for(int i = 0; i < prices.size(); i++)
        {
            preMin = min(preMin, prices[i]);
            res = max(res, prices[i] - preMin);
        }
        return res;
    }
};