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
    /*
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxSum = max(sum, maxSum);
            //到目前位置的和对后面的数组的连续数组没有贡献，需要丢弃
            if(sum <= 0)
            {
                sum = 0;
            }
        }
        return maxSum;
    }*/
};