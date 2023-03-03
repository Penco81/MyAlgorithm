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
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] - prices[i - 1] > 0)
                res += prices[i] - prices[i - 1];
        }
        return res;
    }
};