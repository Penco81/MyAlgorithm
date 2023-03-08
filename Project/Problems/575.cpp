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
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i = 0; i < candyType.size(); i++)
        {
            s.insert(candyType[i]);
        }
        int maxType = s.size();
        int n = candyType.size();
        return min(maxType, n/2);
    }
};