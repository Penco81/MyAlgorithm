//
// Created by 彭科 on 2023/2/27.
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
    bool isValid(string s) {
        stack<char> cs;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                cs.push(')');
            }
            else if(s[i] == '[')
            {
                cs.push(']');
            }
            else if(s[i] == '{')
            {
                cs.push('}');
            }
            else
            {
                if(cs.empty())
                    return false;
                char top = cs.top();
                cs.pop();
                if(top != s[i])
                    return false;
            }
        }
        return cs.empty();
    }
};
