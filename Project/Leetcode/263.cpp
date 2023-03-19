//
// Created by 彭科 on 2023/3/6.
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
    bool isUgly(int n) {
        if(n <= 0)
            return false;
        int factors[] = {2 , 3, 5};
        for(int i = 0; i < 3; i++)
        {
            int factor = factors[i];
            while(n % factor == 0)
            {
                n /= factor;
            }
        }
        return n == 1;
    }
};