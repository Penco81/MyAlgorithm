//
// Created by 彭科 on 2023/3/5.
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
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while(n > 0)
        {
            if((n & 1) == 1)
                cnt++;
            n >>= 1;
        }
        return cnt;
    }
};