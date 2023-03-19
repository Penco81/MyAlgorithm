//
// Created by 彭科 on 2023/3/5.
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
    int rob(vector<int>& nums) {
        int lastNo = 0;
        int lastYes = nums[0];
        int maxRob = max(lastNo, lastYes);
        for(int i = 1; i < nums.size(); i++)
        {
            maxRob = max(lastNo + nums[i], lastYes);
            int temp = lastYes;
            lastYes = lastNo + nums[i];
            lastNo = max(temp, lastNo);
        }
        return maxRob;
    }
};