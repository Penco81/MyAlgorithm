//
// Created by 彭科 on 2022/11/26.
//
class Solution {
public:
    int numberOfCuts(int n) {
        int res = 0;
        if(n == 1)
        {
            res = 0;
        }
        else if(n % 2 == 0)
        {
            res = n / 2;
        }
        else
        {
            res = n;
        }

        return res;
    }
};