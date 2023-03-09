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
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int num = 0;
        map<pair<int, int>, int> mp;
        for(int i = 0; i < dominoes.size(); i++)
        {
            if(dominoes[i][0] > dominoes[i][1])
            {
                mp[make_pair(dominoes[i][0], dominoes[i][1])]++;
            }
            else
            {
                mp[make_pair(dominoes[i][1], dominoes[i][0])]++;
            }
        }
        map<pair<int, int>, int>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > 1)
            {
                num += (it->second * (it->second - 1)) / 2;
            }
        }

        return num;
    }
};