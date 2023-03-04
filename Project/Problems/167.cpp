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
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i = 0; i < numbers.size(); i++)
        {
            int temp = target - numbers[i];
            int s = i + 1;
            int e = numbers.size() - 1;
            while(s <= e)
            {
                int mid = (s + e) / 2;
                if(numbers[mid] == temp)
                {
                    res.push_back(i + 1);
                    res.push_back(mid + 1);
                    return res;
                }
                else if(numbers[mid] > temp)
                {
                    e = e - 1;
                }
                else
                {
                    s = s + 1;
                }
            }
        }
        return res;
    }
};
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int s = 0;
        int e = numbers.size() - 1;
        while(s < e)
        {
            int temp = numbers[s] + numbers[e];
            if(temp > target)
            {
                e = e - 1;
            }
            else if(temp < target)
            {
                s = s + 1;
            }
            else
            {
                res.push_back(s + 1);
                res.push_back(e + 1);
            }
        }
        return res;
    }
};