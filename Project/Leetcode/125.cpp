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
    bool isPalindrome(string s) {
        int st = 0;
        int ed = s.size() - 1;

        while(st < ed)
        {
            while(st < ed && (!check(s[st])))
            {
                st++;
            }
            while(ed > st && (!check(s[ed])))
            {
                ed--;
            }
            if(st >= ed)
                break;
            if(toLower(s[st]) != tolower(s[ed]))
                return false;
            st++;
            ed--;
        }
        return true;
    }

    bool check(char c)
    {
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
            return true;
        return false;
    }

    char toLower(char c)
    {
        if(c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
            return c;
        return 'a' + (c - 'A');
    }
};