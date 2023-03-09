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
    vector<int> shortestToChar(string s, char c) {
        vector<int> res(s.size());
        vector<int> cPos;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == c)
                cPos.push_back(i);
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == c)
            {
                res[i] = 0;
            }
            else
            {
                int MIN = s.size();
                for(int j = 0; j < cPos.size(); j++)
                {
                    int temp = abs(cPos[j] - i);
                    MIN = min(MIN, temp);
                }
                res[i] = MIN;
            }
        }

        return res;
    }
};
