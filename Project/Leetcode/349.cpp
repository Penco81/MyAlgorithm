//
// Created by 彭科 on 2023/3/7.
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++)
        {
            m[nums1[i]] = 1;
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m[nums2[i]] == 1)
            {
                res.push_back(nums2[i]);
                m[nums2[i]] = 2;
            }
        }
        return res;
    }
};