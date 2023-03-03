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
    int singleNumber(vector<int>& nums) {
        int bit = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            bit = bit ^ nums[i];
        }
        return bit;
    }
};