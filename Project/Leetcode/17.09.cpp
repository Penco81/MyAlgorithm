//
// Created by 彭科 on 2023/3/10.
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
    int getKthMagicNumber(int k) {
        int num3 = 1;
        int num5 = 1;
        int num7 = 1;
        while(k > 0)
        {
            int temp = num3 * num5 * num7;
            int temp3 = temp * 3;
            int temp5 = temp * 5;
            int temp7 = temp * 7;

        }
    }

    int pow(int num, int m)
    {
        int res = 1;
        while(m>0)
        {
            res = num * res;
            m--;
        }
        return res;
    }
};