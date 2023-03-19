//
// Created by 彭科 on 2023/3/9.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include<set>
using namespace  std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt = 0;
        int len = nums.size();
        for(int i = 1; i < len && cnt <= 1; i++)
        {
            if(nums[i - 1] > nums[i])
            {
                cnt++;
                if(i - 2 < 0 || nums[i - 2] <= nums[i])
                {
                    nums[i - 1] = nums[i];
                }
                else
                {
                    nums[i] = nums[i - 1];
                }
            }
        }
        return cnt <= 1;
    }
};