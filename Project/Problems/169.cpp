//
// Created by 彭科 on 2023/3/4.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

//算法1先排序再取中位数，但是时间复杂度为nlogn
//时间复杂度为n的方法？

//摩尔投票法
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(candidate < 0 || cnt - 1 < 0)
            {
                candidate = nums[i];
                cnt = 1;
            }
            else
            {
                if(candidate == nums[i])
                    cnt++;
                else
                    cnt--;
            }
        }
        return candidate;
    }
};