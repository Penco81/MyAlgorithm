//
// Created by 彭科 on 2023/3/4.
//
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace  std;

//因为因子5的个数不会大于2的个数，所以直接去5的个数
class Solution {
public:
    int trailingZeroes(int n) {
        int n5 = 0;
        int n2 = 0;
        for(int i = 1; i <= n; i++)
        {
            n5 += (i % 5 == 0? getNum(i, 5) : 0);
            n2 += (i % 2 == 0? getNum(i, 2) : 0);
        }
        return min(n5, n2);
    }

    int getNum(int num, int x)
    {
        int cnt = 0;
        while(num % x == 0)
        {
            num = num / x;
            cnt++;
        }
        return cnt;
    }
};