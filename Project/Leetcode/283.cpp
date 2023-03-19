//
// Created by 彭科 on 2023/3/6.
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
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++)
        {
            bool flag = false;
            for(int j = 0; j < nums.size() - i - 1; j++)
            {
                if(nums[j] == 0)
                {
                    swap(nums[j], nums[j + 1]);
                    flag = true;
                }
            }
            if(!flag)
                return;
        }
    }
};