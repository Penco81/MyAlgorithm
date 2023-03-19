//
// Created by 彭科 on 2023/3/8.
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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), comp);
        sort(s.begin(), s.end(), comp);
        int j = 0;
        int cnt = 0;
        for(int i = 0; i < g.size(); i++)
        {
            for(;j < s.size(); j++)
            {
                if(s[j] >= g[i])
                {
                    cnt++;
                    j++;
                    break;
                }
            }
        }
        return cnt;
    }

    static bool comp(int a, int b)
    {
        return a < b;
    }
};