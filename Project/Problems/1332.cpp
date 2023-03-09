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
    int removePalindromeSub(string s) {
        if(isHUIWEN(s))
            return 1;
        return 2;
    }

    bool isHUIWEN(string s)
    {
        int len = s.size();
        for(int i = 0; i < len / 2; i++)
        {
            if(s[i] != s[len - 1 - i])
                return false;
        }
        return true;
    }
};