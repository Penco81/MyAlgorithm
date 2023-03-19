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
    int getSum(int a, int b) {
        if(b == 0)
            return a;
        if(a == 0)
            return b;
        unsigned int temp = a & b;
        temp <<= 1;
        int temp2 = a ^ b;
        int res = temp;
        return getSum(temp2, res);
    }
};