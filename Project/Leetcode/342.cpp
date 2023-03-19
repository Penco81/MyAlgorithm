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
using namespace  std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        if(n == 1)
            return true;
        while(n % 4 == 0)
        {
            n /= 4;
        }
        return n == 1;
    }
};