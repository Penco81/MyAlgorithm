//
// Created by 彭科 on 2022/11/27.
//
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        int preCount = 0;
        int sufCount = 0;
        for(int i = 0; i < nums.size() && nums[i] != k; i++)
        {
            if(nums[i] < k)
                preCount++;
        }

        for(int i = nums.size() - 1; i >= 0 && nums[i] != k; i--)
        {
            if(nums[i] > k)
                sufCount++;
        }

        int len = min(preCount, sufCount);
        int ans = 0;
        for(int i = 1; i <= 2 * len + 1; i++)
        {
            int preHalfLen = (i - 1) / 2;
            int sufHalfLen = i - preHalfLen - 1;
            //C preHalfLen PreCount
            int preChoice = 0;
            //C sufHalfLen SufCount
            int sufChoice = 0;
            ans = ans + (preChoice * sufChoice);
        }

        return ans;
    }
};