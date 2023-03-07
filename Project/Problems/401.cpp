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
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int i = 0; i <= 11; i++)
        {
            for(int j = 0; j <= 59; j++)
            {
                if(__builtin_popcount(i) + __builtin_popcount(j) == turnedOn)
                {
                    res.push_back(to_string(i) + ":" + (j < 10 ? "0" + to_string(j) : to_string(j)));
                }
            }
        }
        return res;
    }
};