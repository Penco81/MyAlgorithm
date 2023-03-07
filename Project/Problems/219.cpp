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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //value, pos
        map<int, int> m;
        map<int,int>::iterator it;
        for(int i = 0; i < nums.size(); i++)
        {
            it = m.find(nums[i]);
            if(it != m.end())
            {
                return true;
            }
            m[nums[i]] = i;
            if(i >= k)
            {
                m.erase(nums[i - k]);
            }
        }
        return false;
    }
};