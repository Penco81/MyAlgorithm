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
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        string res = "";
        bool isNegative = num < 0;
        num = abs(num);
        while(num != 0)
        {
            res += to_string(num % 7);
            num /= 7;
        }
        reverse(res.begin(), res.end());
        return isNegative? "-" + res : res;
    }
};